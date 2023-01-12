#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];
    int i;
    printf("Cumle giriniz: ");
    scanf("%[^\n]s",cumle); //https://stackoverflow-com.translate.goog/questions/39431924/what-does-n-mean-in-c?_x_tr_sl=auto&_x_tr_tl=tr&_x_tr_hl=tr
    for(i = 0; i < strlen(cumle); i++) {
        printf("%c karakterinin ASCII karsiligi: %d\n", cumle[i], cumle[i]);
    }
    return 0;
}

