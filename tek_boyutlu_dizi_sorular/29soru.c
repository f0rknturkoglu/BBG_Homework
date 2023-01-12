#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100], enuzun[100] = "", enkisa[100] = "";
    int i, j, max = 0, min = 999999, length;
    int uzunluk = 0;

    printf("Cumle giriniz: ");
    scanf(" %[^\n]s", cumle);
    length = strlen(cumle);

    for (i = 0; i <= length; i++) {
        if (cumle[i] != ' ' && cumle[i] != '\0') {
            uzunluk++;
        } else {
            if (uzunluk > max) {
                max = uzunluk;
                j = 0;
                for (int k = i - uzunluk; k < i; k++) {
                    enuzun[j++] = cumle[k];
                }
                enuzun[j] = '\0';
            }
            if (uzunluk < min) {
                min = uzunluk;
                j = 0;
                for (int k = i - uzunluk; k < i; k++) {
                    enkisa[j++] = cumle[k];
                }
                enkisa[j] = '\0';
            }
            uzunluk = 0;
        }
    }

    printf("En uzun kelime: %s\n", enuzun);
    printf("En kisa kelime: %s\n", enkisa);
    printf("Karakter farki: %d\n", max - min);
    return 0;
}

