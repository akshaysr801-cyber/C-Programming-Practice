#include <stdio.h>

int main() {
    int num1, num2, pos, n;
    int mask;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1) << pos;

    num1 = (num1 & ~mask) | ((num2 << pos) & mask);

    printf("Result = %d\n", num1);

    return 0;
}