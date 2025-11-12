#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 2.0 * I; // Define a complex number
    double complex z2 = 3.0 - 4.0 * I;

    float complex sum = z1 + z2;
    float complex product = z1 * z2;

    printf("z1 = %.2f + %.2fi\n", creal(z1), cimag(z1));
    printf("z2 = %.2f + %.2fi\n", creal(z2), cimag(z2));
    printf("Sum = %.2f + %.2fi\n", creal(sum), cimag(sum));
    printf("Product = %.2f + %.2fi\n", creal(product), cimag(product));
    printf("Magnitude of z1 = %.2f\n", cabs(z1));

    return 0;
}
