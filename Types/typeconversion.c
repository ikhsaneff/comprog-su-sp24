#include <stdio.h>
#include <ctype.h> // For toupper function

// Enumerated types
enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    // Declaration and initialization of variables
    char ch = 'a';
    int i = 10;
    float f = 3.14;
    double d = 3.14159265359;

    // Demonstration of character handling functions
    ch = toupper(ch); // Convert character to uppercase
    putchar(ch); // Output: 'A'

    // Reading single character with skipping whitespace
    printf("\nEnter a character: ");
    scanf(" %c", &ch); // Space before %c skips whitespace
    printf("You entered: %c\n", ch);

    // Implicit conversions
    int sum = i + f; // int + float, implicit conversion

    // Explicit conversions using cast expressions
    float quotient;
    int dividend = 10, divisor = 3;
    quotient = (float) dividend / divisor; // Casting one operand to float

    // Demonstrating type definitions
    typedef int Bool;
    Bool flag = 1; // Same as int flag = 1;

    // Using type definition for dollar amounts
    typedef float Dollars;
    Dollars cash_in, cash_out;

    // Using sizeof operator to get size of data types
    printf("\nSize of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}
