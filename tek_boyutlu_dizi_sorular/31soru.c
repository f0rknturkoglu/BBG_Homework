#include <stdio.h>
#include <string.h>

int main() {
    char cumle[1000];
    int i, j, length;

    printf("Cumle giriniz: ");
    scanf(" %[^\n]s", cumle);

    length = strlen(cumle);
    for (i = 0; i < length; i++) {
        if (cumle[i] == '.' || cumle[i] == ',' || cumle[i] == ';' || cumle[i] == ':' || cumle[i] == '!' || cumle[i] == '?') 
		{
            for (j = length; j > i + 1; j--) {
            	
            	
                cumle[j] = cumle[j - 1];
            }
            cumle[i + 1] = ' ';
            length++;
        }
    }

    printf("Cumle: %s\n", cumle);
    return 0;
}

