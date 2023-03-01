#include <stdio.h>

int main() {
    int eta;

    do {
        printf("Inserisci la tua eta':\n");
        scanf("%d", &eta);
    } while (eta < 0);

    if (eta >= 18)
        printf("Sei maggiorenne!");
    else
        printf("Sei non maggiorenne!");

    return 0;
}
