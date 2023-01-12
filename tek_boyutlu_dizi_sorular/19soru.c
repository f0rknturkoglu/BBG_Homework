#include <stdio.h>
#include <math.h>

double hesapla(int secim, double a, double b) {
    switch (secim) {
        case 1:
            return (a + b) / 2;
        case 2:
            return 2 / (1/a + 1/b);
        case 3:
            return (a + b + fabs(a - b)) / 2;
        case 4:
            return (a * b) / (a + b);
        case 5:
            return (a - b) / log(a / b);
        default:
            printf("Yanlis secim yaptiniz...\n");
            return 0;
    }
}

int main() {
    double a, b;
    int secim;

    printf("Pozitif a ve b sayisi giriniz: ");
    scanf("%lf %lf", &a, &b);
    
    printf("1 - Heinz ortalamasi\n");
    printf("2 - Heronian ortalamasi\n");
    printf("3 - Stolarsky ortalamasi\n");
    printf("4 - Identric ortalamasi\n");
    printf("5 - Logaritmik ortalamasi\n");
    printf("Hangi ortalama metoduyla hesaplama yapilsin?: ");
    scanf("%d", &secim);

    double sonuc = hesapla(secim, a, b);
    
    printf("Sonuc: %lf\n", sonuc);

    return 0;
}

