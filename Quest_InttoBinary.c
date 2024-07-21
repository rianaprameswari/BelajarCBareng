#include <stdio.h>

void inttoBin (int input) {

    int binary[128], i = 0;

    //conversion

    while (input > 0) {
        binary[i] = input % 2;
        input = input / 2;
        i++;
    }
    /*nyimpen ke array binary (disini gue masih bingung nih)
    Jujur bacaan di Google sama AI didn't help that much*/

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main () {

    int input;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &input);

    printf("Angka tersebut dalam biner adalah: ");
    inttoBin(input);

return 0;

}