/*
Write a program which accept one number from user and on its first 4
bit. Return modified number.
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

UINT OnBit(UINT iNo)
{
    UINT iMask = 0XF;
    UINT iResult = 0;

    iResult = iNo | iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Result is : "<<iRet;
    return 0;
}