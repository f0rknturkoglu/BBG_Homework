#include <stdio.h>

int main() {
    char ondalik[20];
    printf("Ondalik sayiyi giriniz (virgul kullanarak): ");
    scanf("%s", ondalik);

    int len = 0;
    for (int i = 0; ondalik[i] != '\0'; i++) {
        len++;
        if (ondalik[i] == ',') {
            ondalik[i] = '.';
        }
    }

    int i = 0;
    double sayi = 0.0;
    double div = 1.0;
    int is_negative = 1;
    if (ondalik[i] == '-') {
        is_negative = -1;
        i++;
    }
    while (i < len && ondalik[i] != '.') {
        sayi = sayi * 10 + (ondalik[i] - '0');
        i++;
    }
    if (ondalik[i] == '.') {
        i++;
        while (i < len) {
            div = div / 10;
            sayi = sayi + (ondalik[i] - '0') * div;
            i++;
        }
    }

    sayi = sayi * is_negative;
    printf("Duzeltilmis ondalik sayi: %.4lf\n", sayi);

    return 0;
}

