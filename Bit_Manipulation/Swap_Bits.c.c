#include <stdio.h>

int main() {
    int a, b, pos, n;
    int x, mask;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = ((1 << n) - 1);

    x = ((a >> pos) ^ (b >> pos)) & mask;

    a = a ^ (x << pos);
    b = b ^ (x << pos);

    printf("After Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}