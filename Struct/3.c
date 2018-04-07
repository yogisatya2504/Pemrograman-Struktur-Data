// Typedefine struct

#include <stdio.h>

typedef struct{
    int s1;
    int s2;
    int luas;
}BANGUNDATAR;

int main(){
    BANGUNDATAR persegi, ppanjang;

    printf("Masukkan sisi persegi : ");
    scanf("%d",&persegi.s1);
    persegi.s2 = persegi.s1;

    printf("Masukkan panjang dan lebar p.panjang : ");
    scanf("%d %d",&ppanjang.s1,&ppanjang.s2);

    persegi.luas = persegi.s1 * persegi.s2;
    ppanjang.luas = ppanjang.s1 * ppanjang.s2;

    printf("Luas persegi : %d\nLuas p.panjang : %d\n",persegi.luas,ppanjang.luas);
    return 0;
}
