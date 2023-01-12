#include <stdio.h>
#include <string.h>

int main()
{
    char ay[10];
    int ay_sayisi;

    printf("Lutfen bir ay adi giriniz: ");
    scanf("%s", ay);

    if (strcmp(ay, "ocak") == 0)
    {
        ay_sayisi = 1;
    }
    else if (strcmp(ay, "subat") == 0)
    {
        ay_sayisi = 2;
    }
    else if (strcmp(ay, "mart") == 0)
    {
        ay_sayisi = 3;
    }
    else if (strcmp(ay, "nisan") == 0)
    {
        ay_sayisi = 4;
    }
    else if (strcmp(ay, "mayis") == 0)
    {
        ay_sayisi = 5;
    }
    else if (strcmp(ay, "haziran") == 0)
    {
        ay_sayisi = 6;
    }
    else if (strcmp(ay, "temmuz") == 0)
    {
        ay_sayisi = 7;
    }
    else if (strcmp(ay, "agustos") == 0)
    {
        ay_sayisi = 8;
    }
    else if (strcmp(ay, "eylul") == 0)
    {
        ay_sayisi = 9;
    }
    else if (strcmp(ay, "ekim") == 0)
    {
        ay_sayisi = 10;
    }
    else if (strcmp(ay, "kasim") == 0)
    {
        ay_sayisi = 11;
    }
    else if (strcmp(ay, "aralik") == 0)
    {
        ay_sayisi = 12;
    }
    else
    {
        printf("Girilen ay adi geçerli degildir.\n");
        return 0;
    }

    printf("Girilen ayin yilin %d. ayi oldugu tespit edildi.\n", ay_sayisi);

    return 0;
}
