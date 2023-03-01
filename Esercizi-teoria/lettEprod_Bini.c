#include <stdio.h>

int main(){
    int sum=0, num, prod = 1;

    while(sum<1000) {
        printf("Inserisci un numero:\n");
        scanf("%d", &num);
        sum += num;
        prod *= num;
    }
    printf("Il prodotto dei numeri vale: %d", prod);

    return 0;
}