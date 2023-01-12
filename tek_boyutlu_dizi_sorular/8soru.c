#include <stdio.h>
#include <ctype.h>

int main()
{
char str[100], new_str[100];
int i = 0, j = 0;

printf("Bir cumle giriniz: ");
gets(str);

// Yeni cümle oluşturalim 
while (str[i] != '\0')
{
if (i % 2 == 0)
new_str[j++] = toupper(str[i]);
else
new_str[j++] = tolower(str[i]);
i++;
}
new_str[j] = '\0';

printf("Yeni cumle: %s", new_str);

return 0;
}