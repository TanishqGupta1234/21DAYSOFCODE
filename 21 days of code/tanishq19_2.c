#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the input
    sentence[strcspn(sentence, "\n")] = '\0';

    // Tokenize the sentence into words using strtok
    char *word_list[MAX_WORDS];
    char *delimiters = " \t\n";
    char *word = strtok(sentence, delimiters);
    int word_count = 0;

    while (word != NULL && word_count < MAX_WORDS) {
        word_list[word_count++] = word;
        word = strtok(NULL, delimiters);
    }

    // Print the words and count
    printf("Words in the sentence:\n");
    for (int i = 0; i < word_count; i++) {
        printf("%s\n", word_list[i]);
    }

    printf("Number of words: %d\n", word_count);

    return 0;
}
