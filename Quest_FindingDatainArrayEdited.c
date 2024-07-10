#include <stdio.h>

int findNumber(int array[], int panjangarray, int datayangdicari) {
    for (int i = 0; i < panjangarray; i++) {
        if (datayangdicari == array[i]) {
            return i; // Kalo sesuai, hasil akan ditunjukkan ke index yang ke brp
        }
    }
    return -1; // Return kalo data yang dicari ga ditemukan. Menghindari ambiguitas sama return (index ke) 0
}

int main() {
    // Minta user untuk menentukan panjang array
    int arraylength;
    printf("Masukkan jumlah data: ");
    scanf("%d", &arraylength);

    // Mendefinisikan array
    int array[arraylength];
    for (int i = 0; i < arraylength; i++) {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &array[i]);
    }

    // Minta user untuk input data yang dicari
    int inquiry;
    printf("Masukkan data yang mau dicari: ");
    scanf("%d", &inquiry);

    // Cek data yang dicari apakah ada atau tidak
    int hasil = findNumber(array, arraylength, inquiry);
    if (hasil != -1) {
        printf("Data yang dicari terletak pada indeks ke-%d\n", hasil);
    } else {
        printf("Data yang dicari tidak ditemukan.\n");
    }

    return 0;
}
/*Line 32: Kenapa "hasil != -1?
Karena di SDF di atas udah disepakati kalo "return -1" itu akan mengembalikan kondisi yang salah
Kenapa bukan return 0 atau apapun? Ya itu tadi, menghindari ambiguitas, kalo return 0 disangkanya
Hasilnya jadi ke index ke 0
Trus lagi, kenapa ga "Hasil == i"? Karena i-itu sendiri hanya didefine hanya di dalam for loop. Kalo mau
jadi hasil == i, i-nya harus dalam bentuk variabel global
Nah, sedangkan kalo kita mau buat i jadi variabel global, bakalan ribet banget*/