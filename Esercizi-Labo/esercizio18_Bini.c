#include <stdio.h>

int main() {
    int x,y;
    printf("Inserisci due numeri:\n");
    scanf("%d%d", &x, &y);

    if (x == y){
        printf("I due numeri sono uguali (%d==%d)\n", x, y);
    }
    else if (x < y){
        printf("Il primo numero e' piu' piccolo del secondo (%d<%d)\n", x, y);
    }
    else
        printf("Il primo numero e' piu' grande del secondo (%d>%d)\n", x, y);

    return 0;
}