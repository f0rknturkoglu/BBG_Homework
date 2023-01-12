#include <stdio.h>

int main() {
    char c, prevc = ' ';
    char str[1000];

    printf("Cümleyi giriniz: ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (prevc == ' ') {
            if (c >= 'a' && c <= 'z') {
                c -= 32;
            }
        }
        putchar(c);
        prevc = c;
    }

    return 0;
}

