#include <stdio.h>

void countFreq(long long n, int freq[]) {
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
}

int main() {
    long long n;
    int freq[10] = {0}, i;

    printf("Enter a number: ");
    scanf("%lld", &n);

    countFreq(n, freq);

    for (i = 0; i < 10; i++)
        printf("%d occurs %d times\n", i, freq[i]);

    return 0;
}