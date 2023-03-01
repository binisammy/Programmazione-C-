#include <stdio.h>

int main() {
    int dim, i, j;
    printf("Inserisci la dimensione del quadrato:\n");
    scanf("%d", &dim);

    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++)
            printf("*  ");
        printf("\n");
    }

    return 0;
}