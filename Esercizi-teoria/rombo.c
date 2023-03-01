#include <stdio.h>

int main() {
    int dim, i, j, k;
    printf("Inserisci un numero:\n");
    scanf("%d", &dim);

    for (i = 0; i < dim ; i++) {
        for (j = 1; j < dim - i; j++)
            printf(" ");
        for (k = 0; k < 2 * i + 1; k++)
            printf("*");
        printf("\n");
    }

    for (i = dim; i > 1; i--) {
        for (j = 0 ; j < dim+1-i; j++)
            printf(" ");
        for (k = 0; k < i+1 ; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
