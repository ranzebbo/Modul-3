#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 0)
        printf("Bilangan tidak valid\n");
    else if (n >= 100)
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    else if (n == 0)
        printf("Nol\n");
    else if (n < 10)
        printf("Satuan\n");
    else if (n < 20)
        printf("Belasan\n");
    else
        printf("Puluhan\n");

    return 0;
}
