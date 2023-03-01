#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero intero:\n");
    scanf("%d", &num);

    if (num >= 1 && num <= 25 || num >= 50 && num <= 75)
        printf("SEI IN ZONA VERDE!\n");
    else if (num > 25 && num < 50 || num > 75 && num <= 100)
        printf("SEI IN ZONA ROSSA!\n");
    else
        printf("SEI FUORI ZONA!\n");

    return 0;
}