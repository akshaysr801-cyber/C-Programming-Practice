#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed String = %s", str);

    return 0;
}