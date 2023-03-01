#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    clock_t start, end;
    double execution_time;
    int num, i, isPrime = 1;
    printf("Inserisci un numero:\n");
    scanf("%d", &num);

    start = clock();
    if (num % 2 != 0 && num != 1) {
        for (i = 3; i <= sqrt(num); i += 2)
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
    } else
        isPrime = 0;

    if (isPrime || num == 2)
        printf("Il numero e' primo\n");
    else
        printf("Il numero non e' primo\n");

    end = clock();
    execution_time = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("Exec time: %lf", execution_time);


    return 0;
}