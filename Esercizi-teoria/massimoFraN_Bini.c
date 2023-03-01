#include <stdio.h>

int main(){
    int x, i, num, max;
    do{
        printf("Quanti numeri vuoi inserire?\n");
        scanf("%d",&x);
    } while (x<0);

    printf("Inserisci un numero:\n");
    scanf("%d",&max);
    for(i=1;i<x;i++){
        printf("Inserisci un numero:\n");
        scanf("%d",&num);
        if(num>max)
            max = num;
    }

    printf("Il numero massimo e': %d", max);

    return 0;
}