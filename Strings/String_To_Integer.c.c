#include <stdio.h>

int main() {
    char str[50];
    int num = 0, i = 0;

    printf("Enter number as string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer = %d", num);

    return 0;
}