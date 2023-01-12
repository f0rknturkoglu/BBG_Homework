#include <stdio.h>

int main(void) {
    int n;
    printf("Dizideki eleman sayisini girin: ");
    scanf("%d", &n);

    int a[n], b[n], c[n], d[n];
    printf("A dizisindeki elemanlari girin: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("B dizisindeki elemanlari girin: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    printf("C dizisindeki elemanlari girin: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    
    for (int i = 0; i < n; i++) {
        d[i] = a[i] + b[i] - c[i];
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (d[i] < d[j]) {
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    printf("D dizisi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}

