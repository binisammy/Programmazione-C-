#include <stdio.h>

int main() {
    int x,y,aux,i;
    printf("Inserisci due numeri:\n");
    scanf("%d%d",&x,&y);

    if (x<y){
        aux = x;
        x = y;
        y = aux;
    }
    for (i = x; i % y != 0; i += x);

    printf("Il mcm vale: %d\n", i);

    return 0;
}