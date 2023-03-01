#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Inserisci un numero:\n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Il quadrato del numero vale: %f", pow(num, 2));
    else
        printf("Il cubo del numero vale: %f", pow(num, 3));


    return 0;
}