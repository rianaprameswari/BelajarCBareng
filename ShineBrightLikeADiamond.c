#include <stdio.h>

int main() {

    //terima user input
    int row;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &row);

    //iterasi
    int gerak, spasi, bintang;

    //SEGITIGA ATAS: print kolom
    for(gerak = 1; gerak <= row; gerak++) {
        //print spasi ke tengah
        for(spasi = gerak; spasi < row; spasi++) {
            printf(" ");
        }
        //cetak bintang
        for(bintang = 1; bintang <= (2 * gerak - 1); bintang++) {
            printf("*");
        }
    printf("\n");
    }

    //SEGITIGA BAWAH: Print kolom
    for(gerak = row - 1; gerak >= 1; gerak--) {\
        //print spasi
        for(spasi = gerak; spasi < row; spasi++) {
            printf(" ");
        }
        //print bintang
        for(bintang = 1; bintang <= (gerak * 2 - 1); bintang++) {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
