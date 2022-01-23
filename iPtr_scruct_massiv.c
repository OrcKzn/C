#include<stdio.h>
#include<stdlib.h>

struct SPoint {                     // структура
    int x;
    int y;
    int s[3];
};

typedef struct SPoint TPoint;      // новый тип данных , структурный


void SetPoint(struct SPoint *s, int x1, int y1, int g1[])
{
    if(s != NULL)
    {
        (*s).x = x1;
        (*s).y = y1;
    
    if(g1 != NULL ) for(int i=0;i<3;i++) { (*s).s[i] = g1[i]; }
    
    }
}


void ShowPoint(TPoint *h)
{
    if(h != NULL)
    {
    printf("x = %d, y = %d\n", (*h).x, (*h).y);
     if((*h).s != NULL ) for(int i=0;i<3;i++) { printf("s[%d] = %d\n",i, (*h).s[i]); }
    }
}


int main()
{
    TPoint p;                     // переменная структуры
    TPoint *pPtr = NULL;
    pPtr = &p;
    int g[3];    
 
    p.x = 1;                // присвоили значение
    p.y = 2;                // присвоили значение
 
    g[0] = 155;
    g[1] = 156;
    g[2] = 157;


    printf("x = %d, y = %d\n", p.x, p.y);

    (*pPtr).x = 10;         //присвоили значение через указатель
    (*pPtr).y = 20;         

    printf("x = %d, y = %d\n", p.x, p.y);

    p.x = 6;
    p.y = 8;
    ShowPoint(pPtr);
    SetPoint(pPtr, 33,44, g);
    ShowPoint(pPtr);


    return 0;
}

/*
void PrintMassiv(int a1, int a2, int k[])
{
    printf("p1 = %d , p2 = %d\n", a1, a2);
    printf("s[0] = %d   s[1] = %d   s[2] = %d\n", k[0], k[1], k[2]);
}


int main()
{

    int p1, p2;
    int s[3];

    p1 = 10;
    p2 = 20;

    s[0] = 1;
    s[1] = 2;
    s[2] = 3;

    PrintMassiv(p1, p2, s);







return 0;
}



*/
