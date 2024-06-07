#include <stdio.h>
#include <string.h>

int main() {

    //input data user
    char nama[20], nik[16], status[1], konfirm_buat[1];
    int usia, len_nik = strlen(nik);
    printf("Selamat datang di program Pendataan KTP. Silakan masukan nama Anda: \n");
    scanf("%c", &nama);
    printf("Usia: \n");
    scanf("%d", &usia);
    //checking kondisi umur user
    if (usia < 17) {
        printf("Mohon maaf, Anda tidak bisa menggunakan layanan ini.");
    }
    else {
        printf("Apakah anda memiliki KTP? (Y/T): \n");
        scanf("%s", &status);
    }
    //hecking status kepemilikan KTP dan penawaran bikin KTP
    if (status == 'y' || 'Y') {
        printf("Masukkan 16 digit Nomor Induk Kependudukan (NIK) yang ada pada bagian belakang KTP Anda: ");
        scanf("%s", &nik);
    }
    else if (len_nik > 16 || len_nik < 2) {
        printf("NIK yang Anda masukan tidak lengkap/salah. Mohon diulangi: ");
        scanf("%s", &nik);
    }
    else if (status == 't' || 'T') {
        printf("Apakah Anda berminat ingin membuat KTP? (Y/T): ");
        scanf("%s", &konfirm_buat);
    }
    else if (konfirm_buat == 'y' || 'y') {
        printf("Silahkan datang ke Dukcapil terdekat");
    }
    else if (konfirm_buat == 't' || 'T') {
        printf("Terimakasih telah menggunakan layanan kami\n");
        printf("Pastikan Identitas Anda terdaftar dalam sistem Dukcapil Kemendagri.\n");
        printf("Sampai Jumpa");
    }
    else {
        printf("Data anda telah tersimpan dalam database kami.\n");
        printf("Terimakasih atas patisipasi Anda dalam program pendataan kepemilikan KTP periode ini\n");
        printf("Sehat selalu, Sampai Jumpa.");
    }
return 0;
}