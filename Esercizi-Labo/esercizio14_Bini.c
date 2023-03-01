#include <stdio.h>

int main() {
    int eta;

    do {
        printf("Inserisci la tua eta':\n");
        scanf("%d", &eta);
    } while(eta<0);

    printf("Restano %d anni per arrivare a 100 anni!", 100-eta);

    return 0;
}