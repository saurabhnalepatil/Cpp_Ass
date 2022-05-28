/*
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
*/
/*
   Op1     Op2      &       |       ^
    1       0       0       1       1
    0       1       0       1       1
    1       1       1       1       0
    0       0       0       0       0
*/

#include<iostream>
using namespace std; 
typedef unsigned int UINT;

UINT BitOFF(UINT iNo)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    iMask = iMask <<6;
    iResult = iNo ^ iMask;
    return iResult;
};

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = BitOFF(iValue);

    cout<<"Result is : "<<iRet;

    return 0;
}