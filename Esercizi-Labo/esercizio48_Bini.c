#include <stdio.h>

int main() {
    int i, j, num, area;
    char simbolo;
    printf("Inserisci un numero:\n");
    scanf("%d", &num);
    area = num * num;
    fflush(stdin);
    printf("Scegli un simbolo a piacere:\n");
    scanf("%c", &simbolo);

    //for annidati
    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            printf("%c  ", simbolo);
        }
        printf("\n");
    }
    printf("\n\n");

    //un for con operatore %
    for (i = 1; i <= area; i++) {
        printf("%c  ", simbolo);
        if (i % num == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}