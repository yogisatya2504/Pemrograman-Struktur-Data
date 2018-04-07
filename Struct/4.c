#include <stdio.h>

typedef struct{
    int j;
    int m;
    int n;
}TIME;

void perbedaanWaktu(TIME a,TIME b, TIME *c){
    if (b.n < a.n){
        b.m -= 1;
        b.n += 60;
    }
    c->n = b.n - a.n;
    if (b.m < a.m){
        b.j -= 1;
        b.m += 60;
    }
    c->m = b.m - a.m;
    c->j = b.j - a.j;
}

int main(){
    TIME waktuStart, waktuStop, Diff;

    printf("Input waktu start : ");
    scanf("%d:%d:%d",&waktuStart.j,&waktuStart.m,&waktuStart.n);

    printf("Input waktu stop : ");
    scanf("%d:%d:%d",&waktuStop.j,&waktuStop.m,&waktuStop.n);

    perbedaanWaktu(waktuStart,waktuStop,&Diff);

    printf("Perbedaan waktu : %d:%d:%d",Diff.j,Diff.m,Diff.n);
    return 0;
}
