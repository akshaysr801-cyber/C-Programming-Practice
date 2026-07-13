#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Division by zero not possible\n");
        return 0;
    }
    return a / b;
}

int main() {
    float a, b;
    char op;

    printf("Enter expression (a op b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+': printf("%.2f", add(a,b)); break;
        case '-': printf("%.2f", sub(a,b)); break;
        case '*': printf("%.2f", mul(a,b)); break;
        case '/': printf("%.2f", divide(a,b)); break;
        default: printf("Invalid Operator");
    }

    return 0;
}