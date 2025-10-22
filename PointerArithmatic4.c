#include<stdio.h>

int main()

{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL; 
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Result of Subtraction is : %ld\n", q-p);   // Allowed 3

    q = q-2;

    printf("Data pointed by Q is %d\n", *q);       // Allowed 




    return 0;
}