#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0)
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;

    prinft("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even number");
    }
    else 
    {
        printf("%d is odd number");
    }

    return 0;

}