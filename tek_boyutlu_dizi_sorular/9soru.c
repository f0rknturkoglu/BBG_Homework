#include <stdio.h>
#include <string.h>

int main()
{
char str[100], word[20], *p;
int word_count = 0, char_count = 0;

printf("Bir cumle giriniz: ");
gets(str);

printf("Aranacak kelimeyi giriniz: ");
gets(word);

// Küme arama 
p = strstr(str, word);
while (p != NULL)
{
word_count++;
char_count += p - str + 1;
p = strstr(p + 1, word);
}

if (word_count == 0)
printf("Kelime bulunamadi.");
else
printf("Kelime %d. kelimedir ve %d. harftedir.", word_count, char_count);

return 0;
}