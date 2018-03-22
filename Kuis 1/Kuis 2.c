#include <stdio.h>

int main(){
    int a,b=0;
    printf("Masukkan angka : ");
    scanf("%d",&a);

    do{
        a /= 10;
        b++;
    }while(a != 0);

    printf("Jumlah digit : %d\n",b);

    return 0;
}