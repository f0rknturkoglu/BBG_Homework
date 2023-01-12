#include <stdio.h>
#include <string.h>

int main()
{
    int gun, ay;
    char burc_isimleri[12][10] = {"Oğlak", "Kova", "Balık", "Koç", "Boğa", "İkizler", "Yengeç", "Aslan", "Başak", "Terazi", "Akrep", "Yay"};

    printf("Lutfen doğum tarihinizi giriniz (gun ay): ");
    scanf("%d %d", &gun, &ay);

    printf("Burcunuz: %s\n", burc_isimleri[ay - 1]);

    return 0;
}
