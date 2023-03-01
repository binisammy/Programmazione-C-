#include <stdio.h>

int main(){
    int x,y,num1,num2,aux,mcm;
    printf("Inserisci due numeri:\n");
    scanf("%d%d",&num1,&num2);

    x = num1;
    y = num2;

    if(x < y){
        aux = x;
        x = y;
        y = aux;
    }
    if (y != 0){
        while (x % y != 0) {
            aux = x;
            x = y;
            y = aux;
            y = y % x;
        }
    }

    mcm = (num1*num2)/y;
    printf("Il mcm vale: %d", mcm);

    return 0;
}
