#include <stdio.h>

int main() {
    int i;

    //IMPLEMENTAZIONE CON FOR
    for (i = 1; i <= 100; i++)
        printf("%d ", i);
    printf("\n\n");

    for (i = 100; i > 0; i--)
        printf("%d ", i);
    printf("\n\n");

    //IMPLEMENTAZIONE CON WHILE
    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    i = 100;
    while (i > 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n\n");

    //IMPLEMENTAZIONE CON DO-WHILE
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    i = 100;
    do {
        printf("%d ", i);
        i--;
    } while (i > 0);
    printf("\n\n");

    return 0;
}