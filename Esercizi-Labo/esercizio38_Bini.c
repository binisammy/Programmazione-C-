#include <stdio.h>

int main() {
    float spesa;

    printf("Inserire l'ammontare della spesa:\n");
    scanf("%f", &spesa);

    if(spesa > 50 && spesa < 200)
        printf("Hai speso %.2f euro quindi hai diritto ad uno sconto del 10%% percio' paghi %.2f", spesa, spesa-spesa*0.1);
    else if (spesa > 200)
        printf("Hai speso %.2f euro quindi hai diritto ad uno sconto del 15%% percio' paghi %.2f", spesa, spesa-spesa*0.15);
    else
        printf("Nessuno sconto previsto!\n");

    return 0;
}