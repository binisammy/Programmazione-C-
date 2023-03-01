#include <stdio.h>

int main() {
    int scelta, i;
    printf("Inserisci 1 per eseguire un ciclo for, 2 per eseguire un ciclo while"
           "o 3 per eseguire un ciclo do-while\n");
    scanf("%d", &scelta);

    switch (scelta) {
        case 1:
            for (i = 1; i <= 100; i++)
                printf("%d ", i);
            printf("\n\n");
            break;

        case 2:
            i = 1;
            while (i <= 100) {
                printf("%d ", i);
                i++;
            }
            printf("\n\n");
            break;

        case 3:
            i = 1;
            do {
                printf("%d ", i);
                i++;
            } while (i <= 100);
            printf("\n\n");
            break;

        default:
            printf("Il numero inserito non e' corretto!\n");
    }

    return 0;
}