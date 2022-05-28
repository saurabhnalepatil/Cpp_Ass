/*
Write a program which accept one number from user and off 7th and  10th
bit of that number. Return modified number.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT BitOFF(UINT iNo)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001; 
    UINT iResult = 0,iMask = 0;

    iMask1 = iMask1<<6;
    iMask2 = iMask2<<9;

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;
    return iResult;
};

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = BitOFF(iValue);

    cout<<"Result is : "<<iRet;
    return 0;
}