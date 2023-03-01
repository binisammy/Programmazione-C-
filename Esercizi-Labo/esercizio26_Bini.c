#include <stdio.h>

int main() {
    int anno;
    printf("Inserisci un anno:\n");
    scanf("%d", &anno);

    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
        printf("%d e' bisestile.\n", anno);
    else
        printf("%d NON e' bisestile.\n", anno);
    return 0;
}