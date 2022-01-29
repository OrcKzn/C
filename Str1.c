#include <stdio.h>
#include <stdlib.h>

int main(void)
{
// Сделаем строку

    char *c="lalalalala";
    printf("%s\n", c);
    printf("sizeof(*c) = %d\n", sizeof(c)); // указатель на строку занимает 8 байт

// Массив строк
// тепер "c1" это массив из двух элементов, каждый из которых является указателем на тип char
     
    char *c1[2] = {"blalblala", "loloosjdfkljskldjfsjkldfjlo"};
    printf("%s\n", c1[0]);
    printf("%s\n", c1[1]);
    printf("sizeof(*c1[2]) = %d\n", sizeof(c1));  // два указателя на строку занимает 16 байт

// Статический массив

    char c2[2][20] = {"a123123123", "b0000000000"};
    printf("%s\n", c2[0]);
    printf("%s\n", c2[1]);
    printf("sizeof(*c2[2][20]) = %d\n", sizeof(c2));  // две строки по 20 символов итого занимает 40 байт


return 0;
}
