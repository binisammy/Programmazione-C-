#include <stdio.h>
#include <math.h>

int main() {
    int i;
    //con POW
    for (i = 1; i <= 100; i++)
        printf("(%d => %d) ", i, (int) pow(i, 2));
    printf("\n\n");

    //senza POW
    for (i = 1; i <= 100; i++)
        printf("(%d => %d) ", i, i * i);
    printf("\n\n");


    return 0;
}