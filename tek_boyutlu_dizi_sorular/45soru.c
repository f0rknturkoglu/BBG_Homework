#include <stdio.h>
#include <string.h>

void roma_rakami_yazdir(int sayi) {
    // Roma rakamlarýnýn karþýlýklarý
    char roma_rakamlar[10][5] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    printf("%s", roma_rakamlar[sayi]);
}

int main() {
    char cumle[100];
    int i;
    printf("Cumle giriniz: ");
    scanf("%[^\n]s", cumle);
    for(i = 0; i < strlen(cumle); i++) {
        printf("%c karakterinin ASCII karsiligi: ", cumle[i]);
        roma_rakami_yazdir(cumle[i]);
        printf("\n");
    }
    return 0;
}

