#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;

    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;

    return result;
}

void display(struct Complex c) {
    printf("%.2f + %.2fi", c.real, c.imag);
}

int main() {
    struct Complex c1, c2, sum;

    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("Sum = ");
    display(sum);

    return 0;
}
