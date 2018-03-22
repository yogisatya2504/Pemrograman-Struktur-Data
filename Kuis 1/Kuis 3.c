#include <stdio.h>

int main(){
    int jmlh, pil, x, hsl = 0;
    printf("Masukkan jumlah array : ");
    scanf("%d",&jmlh);

    int a[jmlh];

    for (int i = 0; i < jmlh; i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nJumlah yang mana ?\n");
    printf("1. Semua\n");
    printf("2. Ganjil\n");
    printf("3. Genap\n");
    printf("Pilih : ");

    scanf("%d",&pil);

    switch (pil){
        case 1:
            x = 2;
            break;
        case 2:
            x = 1;
            break;
        case 3:
            x = 0;
            break;
        default:
            printf("Input salah!!\n");
            return 0;
    }

    if (x == 2){
        for (int i = 0; i < jmlh; i++){
            hsl += a[i];
        }
    }else{
        for (int i = 0; i < jmlh; i++){
            if (a[i] % 2 == x){
                hsl += a[i];
            }
        }
    }

    printf("Jumlah nilai array : %d\n", hsl);

    return 0;
}