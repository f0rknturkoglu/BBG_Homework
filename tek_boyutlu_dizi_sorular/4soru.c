#include <stdio.h>
#include <math.h>

int main(void)
{
int N, i;
double A[100], B[100], C[100], result = 0;

printf("Dizi uzunlugunu giriniz: ");
scanf("%d", &N);

printf("A dizisinin elemanlarini giriniz: ");
for (i = 0; i < N; i++)
scanf("%lf", &A[i]);

// B dizisi oluşturma
for (i = 0; i < N; i++)
B[i] = pow(A[i], 2);

// C dizisi oluşturma
for (i = 0; i < N; i++)
C[i] = sqrt(A[i]);

// Skaler çarpım
for (i = 0; i < N; i++)
result += B[i] * C[i];

printf("Skaler carpim: %lf", result);

return 0;
}