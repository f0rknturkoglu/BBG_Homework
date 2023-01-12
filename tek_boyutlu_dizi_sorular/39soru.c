#include <stdio.h>
#include <math.h>

int main() {
    int sayi, yeniSayi = 0, i = 0, kalan;

    printf("8'lik tabandaki sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0) {
        kalan = sayi % 10;
        yeniSayi += kalan * pow(8, i);
        sayi /= 10;
        i++;
    }

    printf("10'luk tabanda: %d\n", yeniSayi);
    return 0;
}
