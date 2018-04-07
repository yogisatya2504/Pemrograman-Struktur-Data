// Struct Variable

#include <stdio.h>

struct{
    int j;
    int m;
    int s;
} waktuStart,waktuStop;

int main(){
    printf("Input waktuStart (h:m:s) : ");
    scanf("%d:%d:%d",&waktuStart.j,&waktuStart.m,&waktuStart.s);

    printf("Input waktuStop (h:m:s) : ");
    scanf("%d:%d:%d",&waktuStop.j,&waktuStop.m,&waktuStop.s);


    return 0;
}
