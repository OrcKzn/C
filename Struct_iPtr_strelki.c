#include <stdio.h>
#include <stdlib.h>

struct Sintchar {
    int x;
    char c;
};

typedef struct Sintchar Tintchar, *Pintchar;


int main(void)
{
    Tintchar ic = { 10, 'A' };
// новый тип "Pintchar" является указателем, который указывает на "struct Sintchar"
    Pintchar pic; // можно записать "Tintchar *pic;" не используя Pintchar 
    pic = &ic;
// стрелочка делает два действия, 1 переход по адресу структуры 2 обращение к его полю
    pic->x = 55;   //  (*pic).x = 55;    тоже самое
    pic->c = 'F';  //  pic[0].c = 'A';   тоже самое  
    printf("%d  %c\n", ic.x, ic.c);

// массив структур

    Tintchar ic1[2]= { {10, 'A'}, {33, 'S'} }; // каждый элемент массива является структурой
                                               // проинициализируем каждый элемент структуры

    Tintchar ic2[]= { {10, 'A'}, {33, 'S'} }; // размер массива струк. можно не указывать и определить его длинну 
    int len = sizeof(ic2)/sizeof(ic2[0]);     // после его создания
    
    for (int i = 0; i <   2; i++) printf("%d  %c\n", ic1[i].x, ic1[i].c );
    for (int i = 0; i < len; i++) printf("%d  %c\n", ic2[i].x, ic2[i].c );
   
    printf("sizeof(ic2)   = %d\n", sizeof(ic2));
    printf("sizeof(ic2[0] = %d\n", sizeof(ic2[0]));
    printf("size bite struct LEN = %d\n", len);

// двумерные массивы инициализируются аналогично, каждый элент массива инициализируется 

    int mas[3][2] = {{1,2}, {11,22}, {44,77}};
    for(int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 2; i++) 
            printf("%d ", mas[j][i]);

            printf("\n");
        }

            

    














    return 0;
}
