#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    int j;
    /* data */
};

int main()

{
    printf("Size of structure is %lu\n", sizeof(struct Demo));


    return 0;
}