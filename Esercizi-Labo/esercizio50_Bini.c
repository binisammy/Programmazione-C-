#include <stdio.h>

int main() {
    int num, i;
    printf("Devo contare da 1 fino a 100. Dove vuoi che mi fermi?\n");
    scanf("%d", &num);

    printf("Con break:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
        if(i==num)
            break;
    }
    printf("\nSenza break:\n");

    for (i = 1; i <= 100 && i != num+1; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}