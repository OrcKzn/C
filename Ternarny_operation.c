#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=110;
    
    i =  i < 10 ? 10 : 55;
    i =  i > 100 ? 100 : 66;


    printf("i = %d\n", i);

return 0;
}
