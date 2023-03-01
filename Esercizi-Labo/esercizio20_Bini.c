#include <stdio.h>
#include <math.h>

int main() {
    float peso, altezza, bmi;
    printf("Inserisci il peso:\n");
    scanf("%f", &peso);
    printf("Inserisci l'altezza:\n");
    scanf("%f", &altezza);

    bmi = peso / pow(altezza, 2);

    if (bmi <= 18.5)
        printf("BMI: %f  SOTTOPESO\n", bmi);
    else if (bmi > 18.5 && bmi <= 25)
        printf("BMI: %f  NORMOPESO\n", bmi);
    else if (bmi > 25 && bmi <= 30)
        printf("BMI: %f  SOVRAPPESO\n", bmi);
    else if (bmi > 30 && bmi <= 40)
        printf("BMI: %f  OBESO\n", bmi);
    else
        printf("BMI: %f  OBESO GRAVE\n", bmi);
    return 0;
}