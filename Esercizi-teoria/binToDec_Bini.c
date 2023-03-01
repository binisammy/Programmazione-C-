#include <stdio.h>

int main() {
    int num, res = 0, pow = 1, i, isBin = 0;

    printf("Inserisci un numero (se binario, una cifra alla volta):\n");
    scanf("%d", &num);
    for (pow = 1; num == 0 || num == 1; pow *= 2) {
        isBin = 1;
        if (num == 1)
            res += pow;
        printf("Inserisci una cifra binaria (o un altro numero per finire):\n");
        scanf("%d", &num);
    }

    if (num != 0 && num != 1 && !isBin) {
        for (i = 1; num != 0; i *= 10) {
            if (num % 2 == 1)
                res += i;
            num = num / 2;
        }
    }

    printf("Il numero convertito vale: %d\n", res);

    return 0;
}
