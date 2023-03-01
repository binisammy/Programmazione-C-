#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Inserisci un numero:\n");
    scanf("%f", &x);

    printf("Il cubo del numero %2.f vale %2.f, il quadrato vale %2.f", x, pow(x, 3), pow(x, 2));
    return 0;
}