#include <stdio.h>

int main()
{
char str[100], new_str[200];
int i, j;

printf("Bir cumle giriniz: ");
gets(str);

// Yeni cümle oluşturma
for (i = 0, j = 0; str[i] != '\0'; i++)
{
new_str[j++] = str[i];
new_str[j++] = str[i];
}
new_str[j] = '\0';

printf("Yeni cumle: %s", new_str);

return 0;
}