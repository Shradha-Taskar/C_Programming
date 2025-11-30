#include <stdio.h>
int main()
{
    int *Arr = Null;


    Arr = (int *)malloc(5 * sizeof(int));              

    Arr = (int *)realloc(Arr, 10*sizeof(int));

    freeb(Arr);

    return 0;

}