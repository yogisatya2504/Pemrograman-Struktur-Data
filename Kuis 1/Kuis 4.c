#include <stdio.h>

int pangkat(int a, int p){
    int hsl = a;

    for (int i = 1; i < p; i++){
        hsl *= a;
    }

    return hsl;
}

int main(){
    int a, p, hasil;
    printf("Masukkan angka : ");
    scanf("%d",&a);
    printf("Pangkat : ");
    scanf("%d",&p);

    hasil=pangkat(a,p);

    printf("Hasil %d pangkat %d adalah %d\n",a,p,hasil);

    return 0;
}