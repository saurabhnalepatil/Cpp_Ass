/*
Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0xF000000F, iResult = 0;

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    iRet = ToggleNibble(iValue);

    cout<<"Updated value is :\n"<<iRet;
    return 0;
}