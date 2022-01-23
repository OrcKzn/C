#include<stdio.h>


int Inc1(int a)
{
    return a+1;
}

void Inc2(int *x)
{
    if (x != NULL)
        *x = *x + 1;
}



int main(void)
{
    int i = 7;
    i = Inc1(i);
    printf("Inc1 ->  i = %d\n", i);
    Inc2(&i);    
    printf("Inc2 ->  i = %d\n", i);



return 0;
}
