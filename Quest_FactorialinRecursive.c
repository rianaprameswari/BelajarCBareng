#include <stdio.h>

int Factorial(int num) {
    //base case
    if (num == 0) {
        return 1;
    }
    //recursive case
    else {
        return num * Factorial(num - 1);
    }
}

int main () {

    int num;
    //input user
    printf("Masukkan angka: ");
    scanf("%d", &num);

    //pemanggilan fungsi
    int hasil = Factorial(num);
    printf("Hasil faktorial dari data masukan Anda adalah %d", hasil);

    return 0;
}