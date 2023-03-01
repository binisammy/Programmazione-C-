#include <stdio.h>
#include <stdbool.h>

int main() {
    int secret, i, inNum;
    bool found = false;
    do {
        printf("Inserisci un numero tra 1 e 100:\n");
        scanf("%d", &secret);
    } while (secret < 1 || secret > 100);


    printf("Indovina il numero compreso tra 1 e 100:\n");
    for (i = 0; i < 10 && !found; i++) {
        scanf("%d", &inNum);
        if (inNum < secret)
            printf("Troppo basso!\n");
        else if (inNum > secret)
            printf("Troppo alto!\n");
        else {
            printf("Esatto!");
            found = true;
        }
    }

    if (!found)
        printf("Hai perso!\n");


    return 0;
}