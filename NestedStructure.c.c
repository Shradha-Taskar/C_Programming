#include<stdio.h>

struct Demo
{
    int i;
    float f;
    /* data */
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj;          // Nested
    /* data */
};

int main()

{
    printf("Size of Hello structure is: %lu\n", sizeof(struct Hello));   // 16


    return 0;
}