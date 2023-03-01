#include <stdio.h>

int main(){
    int x,y,z;

    printf("Inserire 3 numeri:\n");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y){
        if (x>z)
            printf("Il numero piu' grande e' %d:\n", x);
        else
            printf("Il numero piu' grande e' %d:\n", z);
    }
    else if(y>z)
        printf("Il numero piu' grande e' %d:\n", y);
    else
        printf("Il numero piu' grande e' %d:\n", z);

    return 0;
}