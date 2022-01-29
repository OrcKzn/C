#include <stdio.h>
#include <stdlib.h>

typedef int celoe, *pCeloe;  // можно перечислять через запятую

int main()
{
    celoe i = 7;
    pCeloe pi;   //  аналогичная запись "int *pi;"
                 //  Т.к. PCeloe это тип указатель, то "*" перед именем перем. ставить не нужно
    
    pi = &i;
    *pi = 10;
    
    printf("%d\n", i);

    return 0;
}
