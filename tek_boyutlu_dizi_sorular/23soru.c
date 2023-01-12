#include <stdio.h>

int main() {
    int sayi, gecici, basamak = 0;

    printf("Pozitif tam sayi giriniz: ");
    scanf("%d", &sayi);

    gecici = sayi;
    while (gecici > 0) {
        gecici = gecici / 10;
        basamak++;
    }
     int deger = sayi/basamak;
    printf("Sayinin basamak sayisi: %d\n", basamak);
    printf("deger = %d \n",deger);
    
    
    /*while (sayi > 0) {
        printf("%d ", sayi % 10);
        sayi = sayi / 10;*/
    }
    


