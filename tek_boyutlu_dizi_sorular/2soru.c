#include <stdio.h>

int main(void) {
    int n;
    printf("Dizideki eleman sayisini girin: ");
    scanf("%d", &n);

    int a[n];
    printf("Dizi elemanlarini girin: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    float ort = (float)sum / n;
    printf("Ortalama: %f\n", ort);

    int b[n];
    int c[n];
    int b_count = 0;
    int c_count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < ort) {
            b[b_count] = a[i];
            b_count++;
        } else {
            c[c_count] = a[i];
            c_count++;
        }
    }

    printf("Kucuk elemanlar: ");
    for (int i = 0; i < b_count; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    printf("Buyuk veya esit olan elemanlar: ");
    for (int i = 0; i < c_count; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}


// sum=toplam 
// count=sayac