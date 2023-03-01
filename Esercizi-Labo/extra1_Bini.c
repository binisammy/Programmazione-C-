#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int num1, num2, operatorIndex, i, res, inRes;
    char operator;
    bool win = false;
    srand(time(NULL));

    num1 = rand() % 100 + 1;
    num2 = rand() % 100 + 1;
    operatorIndex = rand() % 5;

    switch (operatorIndex) {
        case 0:
            operator = '+';
            break;
        case 1:
            operator = '-';
            break;
        case 2:
            operator = '*';
            break;
        case 3:
            operator = '/';
            break;
        case 4:
            operator = '%';
    }

    switch (operator) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        case '%':
            res = num1 % num2;
    }

    for (i = 5; i > 0; i--) {
        printf("Quanto fa %d %c %d? (%d tentativi rimasti)\n", num1, operator, num2, i);
        scanf("%d", &inRes);
        if (inRes == res) {
            printf("Esatto!\n");
            win = true;
            break;
        }
    }
    if (!win)
        printf("Hai perso!\n");

    return 0;
}