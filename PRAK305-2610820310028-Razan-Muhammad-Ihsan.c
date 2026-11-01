#include <stdio.h>

int main(void) {
    long long total_detik, hari, sisa, jam, menit, detik;
    scanf("%lld", &total_detik);

    hari = total_detik / 86400;
    sisa = total_detik % 86400;
    jam = sisa / 3600;
    sisa %= 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    if (hari > 0)
        printf("%lld hari %02lld:%02lld:%02lld\n", hari, jam, menit, detik);
    else
        printf("%02lld:%02lld:%02lld\n", jam, menit, detik);

    return 0;
}
