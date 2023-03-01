#include <stdio.h>

int main() {
    int num, i;
    printf("Devo contare da 1 fino a 100. Quale numero vuoi saltare?\n");
    scanf("%d", &num);

    printf("Con continue:\n");
    for (i = 1; i <=100; i++) {
        if(i==num)
            continue;
        printf("%d ", i);
    }

    printf("\nSenza continue:\n");
    for (i = 1; i <=100; i++) {
        if(i!=num)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}