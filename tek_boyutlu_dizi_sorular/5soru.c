#include <stdio.h>

int main()
{
int N, i;
double A[100], B[100];

printf("Dizi uzunlugunu giriniz: ");
scanf("%d", &N);

printf("A dizisinin elemanlarini giriniz: ");
for (i = 0; i < N; i++)
scanf("%lf", &A[i]);

// B dizisi oluşturma
for (i = 0; i < N; i++)
B[N-1-i] = -A[i];

printf("B dizisi: ");
for (i = 0; i < N; i++)
printf("%.1lf ", B[i]);

return 0;
}