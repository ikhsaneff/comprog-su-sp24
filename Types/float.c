#include <stdio.h>
#include <float.h>

int main() {
    // Floating-point types demonstration
    float f_var;
    double d_var;
    long double ld_var;

    // Assigning values to floating-point variables
    f_var = 3.14f;        // Single-precision floating-point
    d_var = 3.14;         // Double-precision floating-point
    ld_var = 3.14L;       // Extended-precision floating-point

    // Printing the sizes of floating-point types
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Printing characteristics of floating types
    // printf("FLT_MAX: %f\n", FLT_MAX);
    // printf("DBL_MAX: %lf\n", DBL_MAX);
    // printf("LDBL_MAX: %Lf\n", LDBL_MAX);

    // Floating-point constants demonstration
    float constant_f = 257.1234567F;    // Single precision
    double constant_d = 257.1234567;    // Double precision
    long double constant_ld = 257.1234567L; // Long double precision

    // Printing floating-point constants
    printf("Single precision constant: %f\n", constant_f);
    printf("Double precision constant: %lf\n", constant_d);
    printf("Long double precision constant: %Lf\n", constant_ld);

    // Reading and writing single-precision floating-point numbers
    float input_float;
    printf("Enter a single-precision floating-point number: ");
    scanf("%f", &input_float);
    printf("You entered: %.6f\n", input_float);

    // Reading and writing double-precision floating-point numbers
    double input_double;
    printf("Enter a double-precision floating-point number: ");
    scanf("%lf", &input_double);
    printf("You entered: %.15f\n", input_double);

    return 0;
}
