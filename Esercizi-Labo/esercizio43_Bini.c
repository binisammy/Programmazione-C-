#include <stdio.h>

int main() {
    int varA, varB;

    printf("Inserisci due numeri:\n");
    scanf("%d%d", &varA, &varB);

    if (varA <= varB) {
        for (; varA <= varB; varA++)
            printf("%d ", varA);
        printf("\n");
    } else {
        for (; varB <= varA; varA--)
            printf("%d ", varA);
        printf("\n");
    }

    /*
    //implementazione con WHILE
    if (varA <= varB) {
        while (varA <= varB) {
            printf("%d ", varA);
            varA++;
        }
        printf("\n");
    } else {
        while (varB <= varA) {
            printf("%d ", varA);
            varA--;
        }
        printf("\n");
    }
    */

    return 0;
}