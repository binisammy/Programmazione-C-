#include <stdio.h>

int main(){
    float lato,volume;

    printf("Inserisci il lato del cubo:\n");
    scanf("%f", &lato);

    volume = lato * lato * lato;
    printf("Volume: %f", volume);

    return 0;
}