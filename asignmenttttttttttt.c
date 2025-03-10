#include <stdio.h>
#include <string.h>

// Macros
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

// Conditional Compilation
#ifdef DEBUG
#define LOG(msg) printf("DEBUG: %s\n", msg)
#else
#define LOG(msg) // Empty, nothing happens
#endif

// Preprocessor Directives - File Inclusion
#include <stdlib.h> // for malloc(), free()

int main() {
    // 1. Different types of tokens
    int num = 5;  // keyword, identifier, constant
    const float PI_CONST = 3.14; // constant
    char str[] = "Hello, World!"; // string literal
    printf("PI_CONST: %f\n", PI_CONST);  // operator, special symbol

    // 2. Different types of Input/Output Functions
    // Formatted I/O Functions
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Unformatted I/O Functions
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered character: ");
    putchar(c);
    printf("\n");

    printf("Enter a string: ");
    gets(str); // Warning: gets() is unsafe, but included for demonstration
    printf("You entered string: %s\n", str);

    // 3. Switch-case and goto label
    switch (num) {
        case 1:
            printf("Number is 1\n");
            break;
        case 2:
            printf("Number is 2\n");
            break;
        default:
            printf("Number is neither 1 nor 2\n");
    }

    // Goto example
    if (num == 5) {
        goto skip;
    }
    printf("This won't be printed if num is 5.\n");

skip:
    printf("Skipping part of the code.\n");

    // 4. Different types of arrays
    // One Dimensional Array
    int arr1D[5] = {1, 2, 3, 4, 5};
    printf("1D Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");

    // Two Dimensional Array
    int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("2D Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    // 5. Operations on Arrays
    // 1D Array operations (+, -, *, /)
    int sum = 0, diff = 0, product = 1, quotient = arr1D[0];
    for (int i = 0; i < 5; i++) {
        sum += arr1D[i];
        diff -= arr1D[i];
        product *= arr1D[i];
        quotient /= arr1D[i];
    }
    printf("1D Array Operations: sum=%d, diff=%d, product=%d, quotient=%d\n", sum, diff, product, quotient);

    // 2D Array Transpose
    int arr2DTranspose[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2DTranspose[j][i] = arr2D[i][j];
        }
    }
    printf("2D Array Transpose:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2DTranspose[i][j]);
        }
        printf("\n");
    }

    // 6. Different Patterns
    // Square Pattern
    printf("Square Pattern:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Rectangle Pattern
    printf("Rectangle Pattern:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Right Pyramid Pattern
    printf("Right Pyramid Pattern:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Inverse Right Pyramid Pattern
    printf("Inverse Right Pyramid Pattern:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 7. String Handling Functions
    printf("Length of string: %lu\n", strlen(str));
    printf("String in lowercase: %s\n", strlwr(str));
    printf("String in uppercase: %s\n", strupr(str));

    char str2[50];
    strcpy(str2, str);
    printf("Copied string: %s\n", str2);

    if (strcmp(str, str2) == 0) {
        printf("Both strings are identical.\n");
    } else {
        printf("Strings are different.\n");
    }

    strcat(str, " - Concatenated!");
    printf("Concatenated string: %s\n", str);

    return 0;
}

