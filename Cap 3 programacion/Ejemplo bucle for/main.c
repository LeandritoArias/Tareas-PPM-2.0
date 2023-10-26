#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int i=1000;

  /*  for ( i=10000;i>=0;i=i-1)
    {
        printf("\ni= %f", i);
    }

*/

do
{
    printf("\ni= %d", i);
    i--;
}
while (i>0);
    return 0;
}
