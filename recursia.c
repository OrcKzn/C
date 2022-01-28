#include <stdio.h>
#include <stdlib.h>

int a=0;  // глобальный счетчик, показ. кол-во вызовов функции


void MyPrint(int cnt)      // Рекурсия заданное кол-во раз
{
    printf("test %d\n", cnt);
    cnt--;
    if (cnt > 0) MyPrint(cnt); // условия рекурсии
}

int MyFactorial(int x)   // Факториал с помощью цикла
{
    int res = 1;
    for (int i = 1; i <= x; i++)
        res *= i; // res=res*i; 
    return res;
}

void mas(int *a) // процедура подсчета 
{ 
    *a+=1;  // добавляем +1
}
int MyFactRecursia(int x)  // Факториал с помощью рекурсии
{   

    mas(&a);  // вызываем функ где увеличиваем на +1 глобальную перемен "a", подсчит кол-во вызовов функ-ии
    if ( x > 1)
        { 
          return x * MyFactRecursia(x - 1);
        }
    else
        return 1;
}

int main(void)
{

    MyPrint(10);
    printf("F = %d\n", MyFactorial(5));
    printf("F = %d\n", MyFactRecursia(8));
    printf("a = %d\n", a);


return 0;
}
