#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
    /* data */
};

int main()

{
    struct Demo obj;

    obj.i = 11;
    obj.f = 90.4f;
    obj.j = 21;

    printf("%d\n", obj.i);
    printf("%d\n", obj.j);
    printf("%d\n", obj.f);


    return 0;
}