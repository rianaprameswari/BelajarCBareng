#include <stdio.h>
#include <string.h>

int main () {

    //deklarasi variable
    char nama[100], email[100], password[100];

    //terima inputan user
    printf("masukkan nama: ");
    scanf("%s", nama);
    
    //checking field "nama". Asumsi program akan berjalan jika nama sudah diinput
    if (strlen(nama) > 0) {
        printf("Masukkan email: ");
        scanf("%s", email);
    //checking field email
    if (strchr(email, '@') != NULL) {
        printf("Masukkan password: ");
        scanf("%s", password);
    //checking field password
    if (strlen(password) >= 8) {
        printf("Registrasi berhasil. Terimakasih.");
    }
    //kondisi penolakan
    else {
        printf("Password minimal berisi 8 karakter. Mohon dicek kembali.");
    }
    }
    else {
        printf("Format email tidak sesuai. Mohon periksa kembali.");
    }
    }
    else {
        printf("Nama tidak boleh kosong");
    }
return 0;
}

/*Key takeaways
1. fungsi scanf buat strings beda sama int. Kalo int perlu "&" di variabel
nya, kalo string gosah pake
2. operator != dll2 HANYA KEPAKE DI INT
3. new function learned: strchr(): buat nyari kecocokan karakter yang ada
di input. Berkalu buat 1 karakter aja.
4. Strings: A WHOLE NEW WORLD :")*/

/*Questions to be discussed
1. Kenapa kok strings itu ga perlu & buat nyimpen data inputan di scanf?
2. Kenapa ga bisa input nama dengan spasi? Solution buat bisa input nama
dengan spasi? pas aku input nama pake spasi jalan erro yak?
3. Kenapa pas di if strchr nama bisa pake operator != sedangkan di if nama
nggak bisa pke != null (pas itu nyoba pake nama != NULL muncul warning)
*/

    