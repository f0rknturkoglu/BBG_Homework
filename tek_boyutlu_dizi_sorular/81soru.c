#include<stdio.h>

int main() {
    int A, U, i, sayi, ters, basamak;
    printf("Alt siniri giriniz: ");
    scanf("%d", &A);
    printf("Ust siniri giriniz: ");
    scanf("%d", &U);
    for (i = A; i <= U; i++) {
        sayi = i;
        ters = 0;
        while (sayi > 0) {
            basamak = sayi % 10;
            ters = ters * 10 + basamak;
            sayi /= 10;
        }
        if (i == ters) {
            printf("%d\n", i);
        }
    }
    return 0;
}

