#include <stdio.h>

int main() {
    int dim, i, j, k;
    printf("Inserisci lato quadrato:\n");
    scanf("%d", &dim);

    for (i = 0; i < dim; i++) {
        for (j = 0; j < i + 1; j++)
            printf("* ");
        for (k = 0; k < dim - j; k++)
            printf("+ ");
        printf("\n");
    }

    return 0;
}