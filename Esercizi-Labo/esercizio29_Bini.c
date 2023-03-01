#include <stdio.h>

int main() {
    int x, y;
    float risultato;
    char operazione;

    printf("Inserisci due numeri interi:\n");
    scanf("%d%d", &x, &y);
    fflush(stdin);
    printf("Inserisci un simbolo (+ - * / %%):\n");
    scanf("%c", &operazione);
    while (operazione != '%' && operazione != '+' && operazione != '-' && operazione != '*' && operazione != '/') {
        fflush(stdin);
        printf("Simbolo non valido!\nInserisci un simbolo (+ - * / %%):\n");
        scanf("%c", &operazione);
    }

    switch (operazione) {
        case '+':
            printf("Il risultato vale: %d\n", x + y);
            break;
        case '-':
            printf("Il risultato vale: %d\n", x - y);
            break;
        case '*':
            printf("Il risultato vale: %d\n", x * y);
            break;
        case '/':
            if (y == 0)
                printf("Mi dispiace non posso eseguire l’operazione\n");
            else {
                risultato = (float) x / y;
                printf("Il risultato vale: %f\n", risultato);
            }
            break;
        default:
            if (y == 0)
                printf("Mi dispiace non posso eseguire l’operazione\n");
            else
                printf("Il risultato vale: %d\n", x % y);
    }


    return 0;
}