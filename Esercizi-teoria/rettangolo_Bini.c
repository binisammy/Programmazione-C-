#include <stdio.h>

int main() {
    int base, altezza, i, j, k;
    printf("Inserisci base:\n");
    scanf("%d", &base);
    printf("Inserisci altezza:\n");
    scanf("%d", &altezza);

    //prima riga
    for (i = 0; i < base; i++)
        printf("* ");
    printf("\n");
    //interno rettangolo
    for (i = 0; i < altezza - 2; i++) {
        printf("* ");
        for (j = 0; j < base - 2; j++)
            printf("  ");
        printf("*\n");
    }
    //ultima riga
    for (i = 0; i < base; i++)
        printf("* ");
    printf("\n");

    return 0;
}

