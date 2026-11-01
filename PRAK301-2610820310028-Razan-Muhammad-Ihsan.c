#include <stdio.h>

int main(void) {
    int angka[3];
    int n = 0, i, j, temp;

    
    while (n < 3 && scanf("%d", &angka[n]) == 1) {
        n++;
        int ch = getchar();
        if (ch == '\n' || ch == EOF) break;
        ungetc(ch, stdin);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (angka[j] > angka[j + 1]) {
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", angka[i]);
    }
    printf("\n");
    return 0;
}
