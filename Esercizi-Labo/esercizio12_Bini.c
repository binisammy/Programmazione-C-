#include <stdio.h>

int main() {
    int primonum, secondonum;
    printf("Inserisci due numeri:\n");
    scanf("%d%d", &primonum, &secondonum);

    printf("%d + %d = %d\n", primonum, secondonum, primonum + secondonum);
    printf("%d - %d = %d\n", primonum, secondonum, primonum - secondonum);
    printf("%d * %d = %d\n", primonum, secondonum, primonum * secondonum);
    printf("%d %% %d = %d\n", primonum, secondonum, primonum % secondonum);
    if (secondonum != 0)
        printf("%d / %d = %d", primonum, secondonum, primonum/secondonum);
    else
        printf("Mi dispiace non posso eseguire il rapporto.\n");

    return 0;
}