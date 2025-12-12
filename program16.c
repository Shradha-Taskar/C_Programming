//////////////////////////////////////////////////////////////////////////////im=
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       // For input output
#include<stdbool.h>                     // for bool data type


//////////////////////////////////////////////////////////////////////////////
//  
//  Function Name :     ChechEvenOdd
//  Description :       it is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Auther :            Shradha Dattatray Taskar 
//  Date :              10/10/2025
//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function of the application
//
//////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else 
    {   return false;   }
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;

    prinft("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {    printf("%d is even number");   }
    else 
    {    printf("%d is odd number");    }

    return 0;

}