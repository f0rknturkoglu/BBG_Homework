#include <stdio.h>

int main() {
    int saat, dakika, saniye;
    printf("Saat bilgisini giriniz (ss dd ss): ");
    scanf("%d %d %d", &saat, &dakika, &saniye);

    int toplamDakika = saat * 60 + dakika;
    printf("Toplam dakika = %d \n", toplamDakika);
    return 0;
}
