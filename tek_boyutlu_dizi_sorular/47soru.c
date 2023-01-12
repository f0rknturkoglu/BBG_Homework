#include <stdio.h>
#include <string.h>

void ITA1_sifreleyici(char* message) {
    int i;
    for (i = 0; i < strlen(message); i++) {
        switch (message[i]) {
            case 'A':
                printf(".- ");
                break;
            case 'B':
                printf("-... ");
                break;
            case 'C':
                printf("-.-. ");
                break;
            case 'D':
                printf("-.. ");
                break;
            case 'E':
                printf(". ");
                break;
            case 'F':
                printf("..-. ");
                break;
            case 'G':
                printf("--. ");
                break;
            case 'H':
                printf(".... ");
                break;
            case 'I':
                printf(".. ");
                break;
            case 'J':
                printf(".--- ");
                break;
            case 'K':
                printf("-.- ");
                break;
            case 'L':
                printf(".-.. ");
                break;
            case 'M':
                printf("-- ");
                break;
            case 'N':
                printf("-. ");
                break;
            case 'O':
                printf("--- ");
                break;
            case 'P':
                printf(".--. ");
                break;
            case 'Q':
                printf("--.- ");
                break;
            case 'R':
                printf(".-. ");
                break;
            case 'S':
                printf("... ");
                break;
            case 'T':
                printf("- ");
                break;
            case 'U':
                printf("..- ");
                break;
            case 'V':
                printf("...- ");
                break;
            case 'W':
                printf(".-- ");
                break;
            case 'X':
                printf("-..- ");
                break;
            case 'Y':
                printf("-.-- ");
                break;
            case 'Z':
                printf("--.. ");
                break;
            case ' ':
                printf("  ");
                break;
            default:
                printf("%c", message[i]);
        }
    }
}

int main() {
    char message[100];
    printf("sifrelemek istediginiz metni girin: ");
    gets(message);
    printf("sifrelenen mesaj: ");
    ITA1_sifreleyici(message);
    return 0;
}

