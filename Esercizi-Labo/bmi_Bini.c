#include <stdio.h>

int main(){
    float peso, altezza, bmi;
    printf("Inserisci peso e altezza:\n");
    scanf("%f%f", &peso, &altezza);

    bmi = peso/(altezza*altezza);
    printf("L'indice di massa corporea vale: %f", bmi);

    return 0;
}