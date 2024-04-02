/* Computes pairwise averages of three numbers */
#include <stdio.h>

double averagen(double a[], int n)
{
    double sum=0.0; int i;
    for (i=0; i<n; i++) sum += a[i];
    return sum/n;
}

int main(void)
{
    double x[3];
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x[0], &x[1], &x[2]);
    printf("Average: %f\n", averagen(x, 3));
    return 0;
}
