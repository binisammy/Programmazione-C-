#include <stdio.h>

int main() {
    float c, f;
    printf("Inserisci la temperatura in Celsius:\n");
    scanf("%f", &c);

    f = 32 + c * 9/5.0;

    printf("La temperatura vale: %f F", f);

    return 0;
}