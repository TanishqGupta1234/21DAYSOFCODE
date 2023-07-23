#include<stdio.h>
int main(){

import math;

def find_roots(a, b, c):
    discriminant = b**2 - 4*a*c

    if discriminant > 0: # Real and distinct roots
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        return root1, root2

    elif discriminant == 0: # Real and equal roots
        root = -b / (2*a)
        return root, root

    else: # Imaginary roots
        real_part = -b / (2*a)
        imaginary_part = math.sqrt(-discriminant) / (2*a)
        root1 = complex(real_part, imaginary_part)
        root2 = complex(real_part, -imaginary_part)
        return root1, root2

# Get input from the user
a = float(input("Enter the coefficient of x^2 (a): "))
b = float(input("Enter the coefficient of x (b): "))
c = float(input("Enter the constant term (c): "))

# Find the roots
roots = find_roots(a, b, c)

# Print the roots
if isinstance(roots[0], complex):
    print("The equation has imaginary roots:")
    print("Root 1:", roots[0])
    print("Root 2:", roots[1])
else:
    print("The equation has real roots:")
    print("Root 1:", roots[0])
    print("Root 2:", roots[1])
    return 0;
}