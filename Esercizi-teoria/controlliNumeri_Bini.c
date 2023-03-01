#include <stdio.h>

int main(){
    int num1,num2;
    
    printf("Inserisci due numeri:\n");
    scanf("%d%d",&num1,&num2);

    if (num1 % num2 == 0)
        printf("Num1 e' multiplo di num2.\n");
    else
        printf("Num1 non e' multiplo di num2.\n");

    if (num2 % 2 == 0)
        printf("Num2 e' pari.\n");
    else
        printf("Num2 non e' pari.\n");

    if (num1 < 0)
        num1 *= -1;
    if (num2 < 0)
        num2 *= -1;
    printf("Il valore massimo e': %d\n", num1+num2);

    return 0;
}