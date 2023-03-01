#include <stdio.h>

int main(){
    int x, y, aux;
    printf("Inserisci il primo numero:\n");
    scanf("%d", &x);
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &y);

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
    printf("Il MCD e': %d", y);

    return 0;
}