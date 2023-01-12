#include <stdio.h>

int main() {
    int sayi, temp, basamak;

    printf("Tam sayi giriniz : ");
    scanf("%d", &sayi);
    while (sayi != -1) {
    	
    	
        temp = sayi;
        basamak = 0;
        while (temp > 0) {
        	
        	
            temp /= 10;
            basamak++;
        }
        
        
        printf("%d / %d = %.1f\n", sayi, basamak, (float) sayi / basamak);
        
        printf("Tam sayi giriniz : ");
        
        scanf("%d", &sayi);
    }
    return 0;
}

