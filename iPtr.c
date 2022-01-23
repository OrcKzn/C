#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i = 5;         // любая переменная при создании имеет произвольное значение адреса , в случаи с указателем это будет случайный адрес
    int *iPtr = NULL;  // поэтому при создании указателя рекомендуется сразу им присваивать значение NULL - пустой указатель - значит никуда не указывает
                       // т.о. при обрашении к указателю необходимо всегда проверять наличие адреса у указателя, если он NULL значит нет адреса.

    iPtr = &i;      // & - знак амперсант , это операция взятия адреса
                    // указателю iPtr присваиваем адрес переменной i
                    // теперь указатель iPtr хранит адрес переменной i, т.е.
                    // указатшель iPtr указывает на переменную i
                    // можно менять значение переменной i через указатель iPtr


    *iPtr = 2;      // "*" ( звездочка ) перед указателем означает что надо обратиться по адресу указателя
                    // т.е. написав "*" мы обратимся к той пеерменной адрес которой он хранит, к переменной i.
                    // Если мы напишем просто название указателя iPtr (без звездочки) мы поменяем его значение
                    // т.е. тот адрес который он хранит, тем самым потеряем адрес переменной i и будет ошибка.шш

    if (iPtr != NULL )
        *iPtr = 7;

    printf("%d\n", i);
      


return 0;
}




