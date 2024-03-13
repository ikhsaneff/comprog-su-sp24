#include <stdio.h>
#include <limits.h>

int main() {
    // integer types
    int signedInt = INT_MAX;
    unsigned int unsignedInt = UINT_MAX;
    short int shortInt = SHRT_MAX;
    unsigned short int unsignedShortInt = USHRT_MAX;
    long int longInt = LONG_MAX;
    unsigned long int unsignedLongInt = ULONG_MAX;
    long long int longLongInt = LLONG_MAX;
    unsigned long long int unsignedLongLongInt = ULLONG_MAX;

    printf("Signed int max: %d | Storage size: %zu bytes\n", signedInt, sizeof(signedInt));
    printf("Unsigned int max: %u | Storage size: %zu bytes\n", unsignedInt, sizeof(unsignedInt));
    printf("Short int max: %hd | Storage size: %zu bytes\n", shortInt, sizeof(shortInt));
    printf("Unsigned short int max: %hu | Storage size: %zu bytes\n", unsignedShortInt, sizeof(unsignedShortInt));
    printf("Long int max: %ld | Storage size: %zu bytes\n", longInt, sizeof(longInt));
    printf("Unsigned long int max: %lu | Storage size: %zu bytes\n", unsignedLongInt, sizeof(unsignedLongInt));
    printf("Long long int max: %lld | Storage size: %zu bytes\n", longLongInt, sizeof(longLongInt));
    printf("Unsigned long long int max: %llu | Storage size: %zu bytes\n", unsignedLongLongInt, sizeof(unsignedLongLongInt));

    printf("\n");

    // octal, decimal, and hexadecimal constants
    int decimalConstant = 15;
    int octalConstant = 0237;
    int hexadecimalConstant = 0x1af;

    printf("Decimal constant: %d | Storage size: %zu bytes\n", decimalConstant, sizeof(decimalConstant));
    printf("Octal constant: %o | Converted: %d | Storage size: %zu bytes\n", octalConstant, octalConstant, sizeof(octalConstant));
    printf("Hexadecimal constant: %x | Converted: %d | Storage size: %zu bytes\n", hexadecimalConstant, hexadecimalConstant, sizeof(hexadecimalConstant));

    printf("\n");

    // constant suffixes
    long int longConstant = 15L;
    unsigned int unsignedConstant = 15U;
    unsigned long long int unsignedLongLongConstant = 0xffffffffUL;

    printf("Long constant: %ld | Storage size: %zu bytes\n", longConstant, sizeof(longConstant));
    printf("Unsigned constant: %u | Storage size: %zu bytes\n", unsignedConstant, sizeof(unsignedConstant));
    printf("Unsigned long long constant: %llu Storage | size: %zu bytes\n", unsignedLongLongConstant, sizeof(unsignedLongLongConstant));

    return 0;
}
