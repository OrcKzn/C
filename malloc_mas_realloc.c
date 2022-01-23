#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *mas = NULL;  
    
    mas = malloc(sizeof(int)*2);   // выдели память для 2 перемен. присваиваем mas адрес 1-го элемента

    *mas = 333;
    *(mas+1) = 444;
    printf("mas1 = %d, mas2 = %d\n", mas[0], mas[1]);  //одинаково
    printf("mas1 = %d, mas2 = %d\n", *mas, *(mas+1));  //одинаково

    mas = realloc( mas, sizeof(int)*5);  // выделяем в новом месте память, переносим все что было в старом
                                         // старое удаляется и очищается.

    printf("mas1 = %d, mas2 = %d\n", *mas, *(mas+1));

// выводим ЗНАЧЕНИЯ. 
// элементов массива ( результат одинаковый )
    printf("mas1 = %d, mas2 = %d mas3 = %d mas4 = %d\n", mas[0], mas[1], mas[2], mas[3]); 
    printf("mas1 = %d, mas2 = %d mas3 = %d mas4 = %d\n", *mas, *(mas+1), *(mas+2), *(mas+3));

// выводим  АДРЕСА.
// элементов массива ( результат одинаковый )
    printf("mas1 = %d, mas2 = %d mas3 = %d mas4 = %d\n", &*mas, &*(mas+1), &*(mas+2), &*(mas+3)); // полная запись
    printf("mas1 = %d, mas2 = %d mas3 = %d mas4 = %d\n", mas, mas+1, mas+2, mas+3); // обычная запись






return 0;
}
    

