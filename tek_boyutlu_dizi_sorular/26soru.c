#include <stdio.h>

int main() {
    int n, i;
    long long max = 0, min = 0;

    printf("n degerini giriniz: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        max = max * 10 + 9;
        min = min * 10 + (i == 1 ? 1 : 0);
    }

    printf("%lld - %lld = %lld\n", max, min, max - min);
    return 0;
}

