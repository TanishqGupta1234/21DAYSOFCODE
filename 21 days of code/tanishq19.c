#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(const char *input_string) {
    // Calculate the length of the input string
    size_t length = strlen(input_string);
    
    // Allocate memory for the cleaned string (without non-alphanumeric characters) and initialize to lowercase
    char cleaned_string[length + 1];
    size_t cleaned_index = 0;
    for (size_t i = 0; i < length; i++) {
        if (isalnum(input_string[i])) {
            cleaned_string[cleaned_index++] = tolower(input_string[i]);
        }
    }
    cleaned_string[cleaned_index] = '\0';
    
    // Compare the original and reversed strings
    for (size_t i = 0; i < cleaned_index / 2; i++) {
        if (cleaned_string[i] != cleaned_string[cleaned_index - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    
    return 1; // It's a palindrome
}

int main() {
    const char *test_strings[] = {
        "A man, a plan, a canal, Panama!",
        "Racecar",
        "Hello, World!",
        "Never odd or even.",
    };
    size_t num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    
    for (size_t i = 0; i < num_tests; i++) {
        if (is_palindrome(test_strings[i])) {
            printf("'%s' is a palindrome.\n", test_strings[i]);
        } else {
            printf("'%s' is not a palindrome.\n", test_strings[i]);
        }
    }
    
    return 0;
}
