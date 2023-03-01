#include <stdio.h>

int main(){
    int x,y,z, aux;
    printf("Inserisci tre numeri interi:\n");
    scanf("%d%d%d",&x,&y,&z);

    if (y > z) {
        if (y > x) {
            aux = x;
            x = y;
            y = aux;
        }
    }
    else if (z > x) {
        aux = x;
        x = z;
        z = aux;
    }
    if (y < z) {
        aux = z;
        z = y;
        y = aux;
    }
    int *p = &x;

    printf("Stampa numeri dispari in ordine crescente: ");
    if (z%2 != 0)
        printf("%d ",z);
    if (y%2 != 0)
        printf("%d ",y);
    if (x%2 != 0)
        printf("%d ",x);
    printf("\n");

    return 0;
}