#include <stdio.h>

int main(){
    int x;

    printf("Inserisci un numero compreso tra 1 e 12:\n");
    scanf("%d", &x);


    if(x == 1)
        printf("Il mese corrispondente e' Gennaio\n");
    else if(x == 2)
        printf("Il mese corrispondente e' Febbraio\n");
    else if(x == 3)
        printf("Il mese corrispondente e' Marzo\n");
    else if(x == 4)
        printf("Il mese corrispondente e' Aprile\n");
    else if(x == 5)
        printf("Il mese corrispondente e' Maggio\n");
    else if(x == 6)
        printf("Il mese corrispondente e' Giugno\n");
    else if(x == 7)
        printf("Il mese corrispondente e' Luglio\n");
    else if(x == 8)
        printf("Il mese corrispondente e' Agosto\n");
    else if(x == 9)
        printf("Il mese corrispondente e' Settembre\n");
    else if(x == 10)
        printf("Il mese corrispondente e' Ottobre\n");
    else if(x == 11)
        printf("Il mese corrispondente e' Novembre\n");
    else if(x == 12)
        printf("Il mese corrispondente e' Dicembre\n");
    else
        printf("Il numero inserito e' errato!\n");

    return 0;
}