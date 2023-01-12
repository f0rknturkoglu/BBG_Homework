#include <stdio.h>

int main() {
    char cumle[1000];
    int i, noktalama = 0;

    printf("Cumle giriniz: ");
    scanf(" %[^\n]s", cumle);

    for (i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == '.' || cumle[i] == ',' || cumle[i] == ';' || cumle[i] == ':' || cumle[i] == '!' || cumle[i] == '?') {
            noktalama++;
        }
    }

    printf("Noktalama isaretleri sayisi: %d\n", noktalama);
    return 0;
}

