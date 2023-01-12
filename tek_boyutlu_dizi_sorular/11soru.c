#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[100];
    int i;

    printf("Lutfen bir kelime giriniz: ");
    scanf("%s", kelime);

    for (i = 0; i < strlen(kelime); i++)
    {
        printf("%c ", kelime[i]);
    }

    return 0;
}
