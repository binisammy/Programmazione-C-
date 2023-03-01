#include <stdio.h>

int main() {
    int x, y;
    printf("Inserisci due numeri:\n");
    scanf("%d%d", &x, &y);

    if (y % x == 0)
        printf("%d e' multiplo di %d", y, x);
    else
        printf("%d non e' multiplo di %d", y, x);

    return 0;
}