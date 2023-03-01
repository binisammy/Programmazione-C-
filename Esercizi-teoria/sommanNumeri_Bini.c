#include <stdio.h>

int main(){
    int x, i=0, num, res=0;
    do{
        printf("Quanti numeri vuoi inserire?\n");
        scanf("%d",&x);
    } while (x<0);

    while (i<x){
        printf("Inserisci un numero:\n");
        scanf("%d",&num);
        res += num;
        i++;
    }
    printf("La somma dei numeri vale: %d", res);

    return 0;
}