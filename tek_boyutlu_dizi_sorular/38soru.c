#include <stdio.h>

int main() {
    int sayi, yeniSayi = 0, taban = 1, kalan;

    printf("Pozitif tam sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0) {
        kalan = sayi % 8;
        yeniSayi = yeniSayi + kalan * taban;
        sayi = sayi / 8;
        taban = taban * 10;
    }

    printf("8'lik tabanda: %d\n", yeniSayi);
    return 0;
}

