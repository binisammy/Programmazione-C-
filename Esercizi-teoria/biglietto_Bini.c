#include <stdio.h>

int main(){
    float prezzo, provvigione, finale;
    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &prezzo);

    provvigione = 15*prezzo/100;
    if (provvigione < 5)
        provvigione = 5;

    finale = provvigione + prezzo;
    printf("Il costo finale del biglietto e': %.2f euro", finale);

    return 0;
}