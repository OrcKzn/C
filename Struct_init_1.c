#include<stdio.h>
#include<stdlib.h>

struct Human
{
    char *name;      // строка
    int v;
};

int main(void)
{
    struct Human PS = { "Nata1", 40 };    // 1 вариант инициализации ( при создании )
    printf("%s  %d\n", PS.name, PS.v); 

    PS.name = "Nata2";                    // 2 вариант инициализации ( обрашение к полям )
    PS.v = 41;
    printf("%s  %d\n", PS.name, PS.v); 
    
    struct Human *P;
    P = &PS;                             // 3 вариант инициализации ( через указатель )
    P->name = "Nata3";  
    P->v = 42;
    printf("%s  %d\n", PS.name, PS.v); 

return 0;
}
