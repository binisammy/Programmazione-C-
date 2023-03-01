#include <stdio.h>

int main(){
    int i=0, positivi=0;

    while(i>=0){
        printf("Inserisci un numero >= 0:\n");
        scanf("%d", &i);
        if (i!=0){
            positivi++;
        }
    }

    printf("Hai inserito %d numeri positivi\n", positivi-1);

    return 0;
}