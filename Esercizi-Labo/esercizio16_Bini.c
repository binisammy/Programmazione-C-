#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero:\n");
    scanf("%d", &num);

    if(num < 0)
        printf("Il numero e' negativo\n");
    else if (num > 0)
        printf("Il numero e' positivo\n");
    else
        printf("Il numero e' zero\n");

    return 0;
}