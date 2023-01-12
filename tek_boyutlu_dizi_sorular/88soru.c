#include <stdio.h>
#include <string.h>

int main() {
    char cumle[1000];
    int harf[256] = {0};
    int max = 0;
    char maxharf;

    printf("Cumleyi giriniz: ");
    gets(cumle);
    

    int uzunluk = strlen(cumle);
    
    for (int i = 0; i < uzunluk; i++) {
    	
        harf[(int) cumle[i]]++;
    }

    for (int i = 0; i < 256; i++) {
    	
        if (harf[i] > max) {
            max = harf[i];
            maxharf = (char) i;
        }
    }

    printf("En cok tekrar eden karakter: '%c' ( %d defa)", maxharf, max);

    return 0;
}

