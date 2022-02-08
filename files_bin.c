#include <stdio.h>
#include <stdlib.h>


typedef struct STest {
    int x,y;
    float f;
    char c[10];
} TTest;



int main(void)
{
    FILE *f;
    int i = 7777;


    f = fopen("002.txt", "w");
        fwrite(&i, 1, sizeof(i), f); // fwrite - запись в файл в бинарном режиме
    fclose(f);                       // &i - адрес области памяти где лежат данные для записи в файл
                                     // 1  - кол-во элементов
                                     // sizeof(i) - размер каждого элемента
                                     // f - индификатор файла
    int buf;
    f = fopen("002.txt", "r");
        fread(&buf, 1, sizeof(buf), f); // fread - читает файл в бинарном режиме
    fclose(f);                          // &buf - адрес обл.памяти куда запишутся данные из файла
                                        // 1 - кол-во элементов
                                        // sizeof(buf) - размер каждого элемента
                                        // f - индификатор файла 
    printf("%d\n", buf);

// запишем в файл статический массив
    int i1[10] = {1,2,3,444,5,6,7,888,6,7};
    f = fopen("002.txt", "w");
        fwrite(i1, 1, sizeof(i1), f); // напоминаю адрес & от переменной i1[10] уже писать не нужно 
    fclose(f);                       // так как это массив, а ИМЯ массива является УКАЗАТЕЛЕМ, котшорый
                                     // в качестве значения хранит адрес начального элемента массива !!!

    int buf1[10];
    f = fopen("002.txt", "r");
        fread(buf1, 1, sizeof(buf1), f);  // в данном случае sizeof возвращает размер всего массива целиком
     fclose(f);                          
    for(int s = 0; s < 10; s++) printf("%d\n", buf1[s]);

// если при чтении мы не знаем точного кол-ва элементов
// то можно считать их в цикле, до конца файла
    int buf2;
    f = fopen("002.txt", "r");
    while (!feof(f))  // конец файла ?
    {
        if(fread(&buf2, 1, sizeof(buf2), f) > 0 )  // проверяем было ли что то прочитано
            printf("%d\n", buf2);
    }
    fclose(f);

// тоже самое со структурой
    TTest i3 = {50, 88, 3.1413, "test" };
    f = fopen("003.txt", "w");
        fwrite(&i3, 1, sizeof(i3), f); // sizeof берет размер от перем структурного типа
    fclose(f);
    
    TTest buf3;
    f = fopen("003.txt", "r");
        fread(&buf3, 1, sizeof(buf3), f);
    fclose(f);
    
    printf("%d  %d  %f  %s\n", buf3.x, buf3.y, buf3.f, buf3.c);
    







return 0;
}
