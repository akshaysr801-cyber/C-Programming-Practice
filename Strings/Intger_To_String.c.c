#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char str[20];

    printf("Enter number: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    printf("String = %s", str);

    return 0;
}