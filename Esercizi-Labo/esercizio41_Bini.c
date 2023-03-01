#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    bool isXmax;
    printf("Inserisci due numeri:\n");
    scanf("%d%d", &x, &y);

    isXmax = x > y;

    switch (isXmax) {
        case 0:
            printf("%d e' il numero massimo\n", y);
            break;
        case 1:
            printf("%d e' il numero massimo\n", x);
            break;
    }

    return 0;
}