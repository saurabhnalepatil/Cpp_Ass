/*
Write a program which accept one number from user toggle 7th bit 
of that number. return modidied number.
*/ 

#include<iostream>
using namespace std;
typedef unsigned UINT;

UINT togglebit(UINT iNo)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask<<6;
    iResult = iNo ^ iMask;
    return iResult;
};

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = togglebit(iValue);

    cout<<"Result is : "<<iRet;
    return 0;
}


/*
   Op1     Op2      &       |       ^
    1       0       0       1       1
    0       1       0       1       1
    1       1       1       1       0
    0       0       0       0       0
*/