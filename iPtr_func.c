#include <stdio.h>
#include <stdlib.h>
 
// ноывй тип данных указателя на функцию
typedef int (*TFuncAB) (int, int);

// функция которая просто возвращает 5
int Get5()
{
    return 5;
}


// функция принимает 2 значения и возвращает max
int max(int a, int b)
{ 
    if (a > b)
        return a;
    else
        return b;
}

// функция принимает 2 значения и возвращает min
int min(int a, int b)
{ 
    if (a < b)
        return a;
    else
        return b;
}


// функция принимает на вход указатель на функцию ( например отправляем туда max или min )
int GetOne(int (*fn)(int, int))
{
    if(fn != NULL)
    return fn(111,33);   // так как указатель смотрит на min или на max , возвращает соответсвенно min или max
}

// функция принимает на вход указатель на функцию ( например отправляем туда max или min )
// так же передаем массив чисел который будем перебирать и применять к каждому элементу max или min
int GetMas(int mas[], int (*fn)(int, int))
{
    int val = mas[0];     // присваеваем 1й элемент массива
    if(fn != NULL)
    for(int i = 1; i<10; i++)
        val = fn(val, mas[i]); // начинаем 1й сравнивать со 2м и т.д. до 10го элемена, пока не найдем max или min
    return val; // возвращаем то что нашли путем перебора, max или min.
}    

int main(void)
{
    int (*func1)(); // указатель на функцию, которая возвр int и ничего не принимает на вход
    func1 = Get5;  // укажем указатель func1 на функцию Get5
    printf("%d\n", func1() );

    int (*func2)(int, int); //указатель на функцию с двумя параметрами
    func2 = max;
    printf("%d\n", func2(55,7) );

    TFuncAB func3; // переменная нового типа указателя на функцию
    func3 = min;
    printf("%d\n", func3(55,7) );
    
    
    printf("%d\n", GetOne(min) );   // в качестве параметра передаем функцию
    printf("%d\n", GetOne(max) );
    
    int a[10] = {12, 3, 5, 22222, 8, 55, 22, 1, 444, 777}; 
    printf("%d\n", GetMas(a, min) );
    printf("%d\n", GetMas(a, max) );

    int (*fn[2]) (int, int); //указаетль на массив функций
    fn[0] = min;
    fn[1] = max;
    printf("%d\n", fn[0](11,5) );  // fn[0] указывает на min значит и двух чисел вернет минимальное
    printf("%d\n", fn[1](11,5) );  // fn[1] указывает на max значит и двух чисел вернет максимальное









return 0;
}
