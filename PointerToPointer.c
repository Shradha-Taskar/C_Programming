#include<stdio.h>

int main()

{
    int No = 11;

    int *p = &No;
    int **q = &p;
    int ***a = &q;
    int ****b = &a;
    int *****c = &b;

    printf("%d\n", No);
    printf("%d\n", *p);
    printf("%d\n", **q);
    printf("%d\n", ***a);
    printf("%d\n", ****b);
    printf("%d\n", *****c);
    
    return 0;
}