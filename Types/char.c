#include <stdio.h>

int main() {
    char ch;  // Declare a variable of type char

    // Assigning character constants to variables
    ch = 'a';
    printf("ch is now: %c\n", ch);

    // Assigning integer values to a char variable
    ch = 65; // ASCII value of 'A'
    printf("ch is now: %c\n", ch);

    // Incrementing a character
    ch = ch + 1; // Incrementing 'A' to 'B'
    printf("ch is now: %c\n", ch);

    // Incrementing using ++
    ch++; // Incrementing 'B' to 'C'
    printf("ch is now: %c\n", ch);

    ch = 'a';
    
    // Comparing characters
    if ('a' <= ch && ch <= 'z') {
        ch = ch - 'a' + 'A'; // Convert lower-case letter to upper case
    }
    printf("After conversion: %c\n", ch);

    // Example of using characters in a loop
    printf("Uppercase letters:\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
