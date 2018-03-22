/*
Dalam pointer simbol * merujuk pada value
Dalam pointer simbol & merujuk pada alamat
*/

#include <stdio.h>

// fungsi ini nantinya akan mereturn value bertipe int pointer
int *largest(int *a, int *b, int *c){
    // Bandingkan value dari masing-masing alamat
    if (*a > *b && *a > *c){
        return a; // return pointer a atau alamat yang ditampung a
    }else if (*b > *a && *b > *c){
        return b; // return pointer b atau alamat yang ditampung b
    }else{
        return c; // return pointer b atau alamat yang ditampung b
    }
}

int main(){
    int a = 10, b = 20, c = 30;
    int *big;

    big = largest(&a, &b, &c);

    printf("Terbesar adalah : %d\n", *big);

    return 0;
}