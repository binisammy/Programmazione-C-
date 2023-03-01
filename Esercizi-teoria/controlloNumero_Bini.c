#include <stdio.h>

int main(){
    int x;

    printf("Inserisci un numero: ");
    scanf("%d", &x);

    if (x >= 0)
        printf("Il numero che hai inserito e' maggiore o uguale a 0\n");
    else
        printf("Il numero che hai inserito e' minore di 0\n");

    return 0;
}