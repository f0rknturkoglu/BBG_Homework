#include <stdio.h>

int main() {
    int sayi, kalan;
    char hex[100];
    int i = 0;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0) {
        kalan = sayi % 16;
        if (kalan < 10)
            hex[i++] = kalan + '0';
        else
            hex[i++] = kalan + 'A' - 10;
        sayi = sayi / 16;
    }
    hex[i] = '\0';
    int j = i - 1;
    for (int k = 0; k < j; k++, j--) {
        char temp = hex[j];
        hex[j] = hex[k];
        hex[k] = temp;
    }
    printf("16'lik tabanda : %s\n", hex);
    return 0;
}

