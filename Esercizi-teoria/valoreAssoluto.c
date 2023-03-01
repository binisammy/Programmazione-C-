#include <stdio.h>

int main(){
    int x;

    printf("Inserisci un numero:\n");
    scanf("%d",&x);

    if (x < 0)
        x *= -1;

    printf("Il valore assoluto e': %d\n", x);

    return 0;
}