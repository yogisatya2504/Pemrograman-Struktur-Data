// Tagged Struct

#include <stdio.h>

struct Waktu{
    int h; //untuk jam
    int m; //untuk menit
    int s; //untuk detik
};

int main(){
    struct Waktu waktuStart; //penggunaan

    printf("Input waktu sekarang (h:m:s) : ");
    scanf("%d:%d:%d",&waktuStart.h,&waktuStart.m,&waktuStart.s);

    printf("Waktu sekarang adalah : %d:%d:%d\n",waktuStart.h,waktuStart.m,waktuStart.s);

    return 0;
}
