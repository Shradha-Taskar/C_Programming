/*
step 1: understand the problem statement
step 2: write the algorithm
step 3: decide the programming language
step 4: write the program
step 5: test the program
*/

/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        If the input is negative then convert it into positive
        Perform addition of No1 and No2
        Display the Addition on the screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Discription :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Shradha Dattatray Taskar
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2; // Business Logic
    return fSum;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////
//     
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{	
    float fValue1 = 0.0f , fValue2 = 0.0f, fRet= 0.0f;

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is: %f\n", fRet);
    
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input1 : 10.5   Input2 : 3.2    Output : 13.7 
//  Input1 : -10.5  Input2 : 3.2    Output : 13.7
//  Input1 : 10.5   Input2 : -3.2   Output : 13.7
//  Input1 : -10.5   Input2 : -3.2  Output : 13.7
//  Input1 : 10.5   Input2 : 0.0    Output : 10.5
//
///////////////////////////////////////////////////////////////////////////////////////////////
