#include <stdio.h>
int main()
{
    int lenght:
    int *Arr = Null;

    printf("Enter thenumbrt of Elements:\n"),
    scanf {"%d", &lenght};

    Arr = (int *)callpc(lenght, sizeof(int));
    if(Arr == NULL;)
    {
        printf{"unable to located.\n"};
    }

    else 

    {
        printf("Memory successfully located");
    }

    freeb(Arr);

    return 0;

}