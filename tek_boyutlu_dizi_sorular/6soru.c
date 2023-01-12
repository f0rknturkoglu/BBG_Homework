#include <stdio.h>

int main()
{
int N, i;
int A[100];

printf("Dizi uzunlugunu giriniz: ");
scanf("%d", &N);

// A dizisi oluşturma
for (i = 0; i < N; i++)
A[i] = (i % 2 == 0) ? 0 : 1;

printf("A dizisi: ");
for (i = 0; i < N; i++)
printf("%d ", A[i]);

return 0;
}