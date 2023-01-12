
#include <stdio.h>
#include <string.h>

int main()
{
    int gun, ay, yil;
    char ay_isimleri[12][10] = {"ocak", "subat", "mart", "nisan", "mayis", "haziran", "temmuz", "agustos", "eylul", "ekim", "kasim", "aralik"};

    printf("Lutfen doğum tarihinizi giriniz (gun ay yil): ");
    scanf("%d %d %d", &gun, &ay, &yil);

    printf("Dogum tarihiniz: %d %s %d\n", gun, ay_isimleri[ay - 1], yil);

    return 0;
}
