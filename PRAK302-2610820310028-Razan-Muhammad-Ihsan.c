#include <stdio.h>

int main(void) {
    int nilai;
    scanf("%d", &nilai);

    if (nilai >= 80 && nilai <= 100)
        printf("A\n");
    else if (nilai >= 70 && nilai < 80)
        printf("B\n");
    else if (nilai >= 60 && nilai < 70)
        printf("C\n");
    else if (nilai >= 50 && nilai < 60)
        printf("D\n");
    else if (nilai >= 0 && nilai < 50)
        printf("E\n");
    else
        printf("Nilai tidak valid\n");

    return 0;
}
