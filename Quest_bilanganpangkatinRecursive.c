#include <stdio.h>

int operasipangkat(int angkabase, int angkapangkat) {
    //base case
    if (angkapangkat == 0) {
        return 1;
    }
    //recursive case
    else {
        return angkabase * operasipangkat(angkabase, angkapangkat - 1);
    }
}

int main () {

    int angkabase, angkapangkat;
    //input user
    printf("Selamat datang di program pemangkatan. Masukkan angka dasar untuk dipangkatkan: ");
    scanf("%d", &angkabase);
    printf("Lalu masukkan angka pangkatnya: ");
    scanf("%d", &angkapangkat);

    //pemanggilan fungsi
    int hasil = operasipangkat(angkabase, angkapangkat);
    printf("Hasil pemangkatan data Anda adalah %d", hasil);

    return 0;
}