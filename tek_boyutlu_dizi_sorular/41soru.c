#include <stdio.h>
#include <math.h>

int main() {
    char hex[100];
    int decimal = 0;
    int basamak = 0;
    printf("16'lik tabandaki sayiyi giriniz: ");
    scanf("%s", hex);
    int uzunluk = strlen(hex);
    for (int i = uzunluk - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * pow(16, basamak);
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * pow(16, basamak);
        }
        basamak++;
    }
    printf("10'luk tabanda: %d\n", decimal);
    return 0;
}

