#include <stdio.h>

int main() {
    int num, i;
    printf("Inserisci un numero maggiore di 1:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    if(num<100){
        for (i-=1; i <= 100; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}