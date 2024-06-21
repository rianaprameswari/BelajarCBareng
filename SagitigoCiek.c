#include <stdio.h>

int main() {
    int baris;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    // Loop untuk mencetak pola
    for (int printbaris = baris; printbaris >= 1; printbaris--) {
        for (int cetakangka = printbaris; cetakangka >= 1; cetakangka--) {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}

/*Key Takeaways
1. JANGAN PAKE I-J I-J KALO GA MAU BINGUNG. Tentuin mau build apa, dalam kasus ini,
Baris dluan dieksekusi baru angka, GA KEBALIK KEK KEMARIN2
2. Kalo bingung dahlah buat algonya aja dl step-by-stepnya ngapain aja
3. Kalo cetakangka = 1 (Kondisi inisialisasinya), kondisi keduanya itu harus <= printbaris*/

/*Question to be discussed
How to develop logical mind buat bikin nested loop? Pernah belajar kasus bilangan prima
tapi penjelasan dr Gemini ga ngerti2 :")"*/