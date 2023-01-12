#include <stdio.h>
#include <string.h>

int main() {
	
    char cevir[100];

    printf("Cumle giriniz: ");
    scanf("%[^\n]s", cevir);  // okuma satýr sonuna kadar....
    int len = strlen(cevir);  // stringin uzunluðu 
    printf("Ters cevrilmis cumle: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", cevir[i]);
        
    }
    
    return 0;
}

