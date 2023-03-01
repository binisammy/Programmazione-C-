#include <stdio.h>

int main() {
    int num, i, mid=1, first = 0, fib;
    printf("Quanti numeri della serie di fibonacci vuoi stampare?\n");
    scanf("%d", &num);

    printf("%d ", mid);
    for (i = 0; i < num-1; i++) {
        fib = first + mid;
        printf("%d ", fib);
        first = mid;
        mid = fib;
    }

    return 0;
}

