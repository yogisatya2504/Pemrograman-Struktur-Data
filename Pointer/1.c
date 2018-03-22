/*
Dalam pointer simbol * merujuk pada value
Dalam pointer simbol & merujuk pada alamat
*/

#include <stdio.h>

int main(){
    int a;
    int *b; //Inisialisasi variable pointer

    a = 10;
    b = &a; //Pointer b akan diisi dengan alamat a

    printf("Address yang ditampung b : %p\n",b);
    printf("Value yang dipoint b : %d \n",*b);

    return 0;
}