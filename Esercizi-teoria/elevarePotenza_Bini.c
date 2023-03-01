#include <stdio.h>

int main(){
    int esp, i;
    float base, res=1;
    printf("Inserisci base:\n");
    scanf("%f", &base);
    printf("Inserisci esponente:\n");
    scanf("%d", &esp);

    if (esp < 0){
        for (i = 0; i < -esp; i++)
            res *= base;
        res = 1/res;
    }
    else
        for (i = 0; i < esp; i++)
            res *= base;

    printf("Il risultato e': %f", res);

    return 0;
}