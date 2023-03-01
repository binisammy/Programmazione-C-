#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    float inNum, max, min;
    bool crescente = true;
    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &n);

    printf("Inserisci un numero:\n");
    scanf("%f", &inNum);
    max = inNum;
    min = inNum;

    for (i = 0; i < n-1; i++) {
        printf("Inserisci un numero:\n");
        scanf("%f", &inNum);
        if (crescente && inNum < max)
            crescente = false;
        if (inNum > max)
            max = inNum;
        if (inNum < min)
            min = inNum;
    }

    printf("La differenza tra il maggiore e il minore e': %f\n", max-min);
    if (crescente)
        printf("I numeri sono stati inseriti in ordine crescente!\n");

    return 0;
}