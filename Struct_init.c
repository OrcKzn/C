#include<stdio.h>
#include<stdlib.h>

struct Human
{
    char *name;      // строка
//  char name[20];  если строка в структуре будет статическим массивом то в процедуре будут изменения
    int v;
};

// процедура чтоб присвоить новые значени полям структуры
void InitMan(struct Human *F, char *name, int height)
{
// если в структуре будет "char name[20];" статический массив, в этом случае надо
// скопировать все строку по символьно , так как адрес статического массива менять нельзя
// sprintf(F->name, "%s", name);
    F->name = name;
    F->v = height;
}


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

    
    struct Human PS1[3] = {{"m1",100},{"m2",200},{"m3",300}};// вариант инициализации массива структур, при создании
    printf("%s  %d\n", PS1[0].name, PS1[0].v); 
    printf("%s  %d\n", PS1[1].name, PS1[1].v); 
    printf("%s  %d\n", PS1[2].name, PS1[2].v); 

// используем отдельную процедуру чтоб поменять поля  1-вариант                  
    InitMan(&PS1[0], "Nata4", 44); // вместо &PS1[0] правильней писать  PS1    одно и тоже
    InitMan(&PS1[1], "Nata5", 45); // вместо &PS1[1] правильней писать  PS1+1  одно и тоже
    InitMan(&PS1[2], "Nata6", 46); // вместо &PS1[0] правильней писать  PS1+2  одно и тоже

    for (int i = 0; i < 3; i++)
    printf("%s  %d\n", PS1[i].name, PS1[i].v); 


return 0;
}
