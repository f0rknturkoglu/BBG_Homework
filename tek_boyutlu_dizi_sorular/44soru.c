#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];
    int i;
    printf("Cumle giriniz: ");
    scanf("%[^\n]s", cumle);
    for(i = 0; i < strlen(cumle); i++) {
        printf("%c karakterinin ASCII karsiligi: %x\n", cumle[i], cumle[i]);
    }
    return 0;
}
