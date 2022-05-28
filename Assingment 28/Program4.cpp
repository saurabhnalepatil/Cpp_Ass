/*
Write a Program which accept one number from user and toggle 7th and 
10th bit of that number. Return modified number.
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

UINT togglebit(UINT iNo)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0, iResult = 0;

    iMask1 = iMask1<<6;
    iMask2 = iMask2<<9;
    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the Number : ";
    cin>>iValue;

    iRet = togglebit(iValue);
    cout<<"Result is : "<<iRet;
    return 0;
}
