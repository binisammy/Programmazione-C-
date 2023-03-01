#include <stdio.h>
#include <stdbool.h>

int main() {
    int x;
    bool isXeven;
    printf("Inserisci un numero:\n");
    scanf("%d", &x);

    isXeven = x % 2 == 0;

    switch (isXeven) {
        case 0:
            printf("%d e' dispari\n", x);
            break;
        case 1:
            printf("%d e' pari\n", x);
            break;
    }

    return 0;
}