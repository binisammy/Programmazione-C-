#include <stdio.h>

int main(){
    float raggio, volume;

    printf("Inserisci il raggio della sfera:\n");
    scanf("%f", &raggio);

    volume = 4/3.0 * 3.14 * raggio*raggio*raggio;
    printf("Volume: %f", volume);

    return 0;
}