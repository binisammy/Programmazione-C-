#include <stdio.h>

int main() {
    float costo;
    char condizione;

    printf("Inserisci il costo del biglietto:\n");
    scanf("%f", &costo);
    printf("Inserisci la condizione dell'utente:\n");
    printf("P (pensionati), S (studenti), D (disoccupati),"
           " qualsiasi altro tasto per nessuna condizione)\n");
    fflush(stdin);
    scanf("%c", &condizione);

    //uppercase
    if (condizione >= 97 && condizione <= 122) {
        condizione -= 32;
    }

    /*
     * if (condzione == 'P')
     *   costo-= costo*0.15;
     * else if (condzione == 'S')
     *   costo-= costo*0.20;
     * else if (condizione == 'D')
     *   costo-= costo*0.25;
    */

    switch (condizione) {
        case 'P':
            costo -= costo * 0.15;
            break;
        case 'S':
            costo -= costo * 0.20;
            break;
        case 'D':
            costo -= costo * 0.25;
    }

    printf("L'importo da pagare e': %.2f\n", costo);

    return 0;
}