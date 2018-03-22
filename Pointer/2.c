/*
Dalam pointer simbol * merujuk pada value
Dalam pointer simbol & merujuk pada alamat
*/

#include <stdio.h>

int main(){
    int a = 10, b = 20, c;
    int *pa, *pb;

    pa = &a, pb = &b;

    *pa = 15; // Value pada alamat yang ditampung pa (a) akan diubah menjadi 15
    
    c = *pa + *pb; // c diisi dengan penjumlahan dari value yang alamatnya ditampung pa dan  pb

    printf("Hasil a + b : %d\n",c);

    return 0;
}