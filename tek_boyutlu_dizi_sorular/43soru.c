#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];
    int i;
    printf("Cumle giriniz: ");
    scanf("%[^\n]s", cumle);
    for(i = 0; i < strlen(cumle); i++) {
        int ascii = cumle[i];
        printf("%c karakterinin ASCII karsiligi: %o\n", cumle[i], ascii); // %o octadecimal :D
    }
    return 0;
}

