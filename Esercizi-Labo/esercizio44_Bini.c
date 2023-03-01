#include <stdio.h>

int main() {
    char lett = 'A';
    int lettInt = 65;

    for (; lett <= 'Z'; lett++) {
        printf("%c ", lett);
    }
    printf("\n");

    for (; lettInt <= 90; lettInt++) {
        printf("%c ", (char) lettInt);
    }
    printf("\n");

    return 0;
}