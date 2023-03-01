#include <stdio.h>
#include <stdbool.h>

int main() {
    int cateto1, cateto2, ipotenusa;
    bool isRect;

    printf("Inserisci i due cateti e l'ipotenusa:\n");
    scanf("%d%d%d", &cateto1, &cateto2, &ipotenusa);

    isRect = cateto1*cateto1 + cateto2*cateto2 == ipotenusa*ipotenusa;
    if (isRect)
        printf("E' un triangolo rettangolo!");
    else
        printf("Non e' un triangolo rettangolo!");


    return 0;
}