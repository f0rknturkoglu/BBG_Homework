#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    int i, j, sayac = 0;

    printf("Lutfen bir cumle giriniz: ");
    gets(cumle);

    for (i = 0; i < strlen(cumle); i++)
    {
        if (cumle[i] == ' ' || cumle[i] == '\0')
        {
            if (cumle[i - 1] == 'a')
            {
                sayac++;
            }
        }
    }

    printf("Girilen cumlede, \"a\" ile biten kelime sayisi: %d\n", sayac);

    return 0;
}
