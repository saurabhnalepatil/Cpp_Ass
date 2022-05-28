/*
Write a program which accept one number and position from user and on 
that bit. Return modified number.
Input : 10 3
Output : 14
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001, iResult = 0;

    if((1 < iPos ) && ( iPos > 32))
    {
        cout<<"Invalid Bit number";
        return 0;
    }
    iMask = iMask <<(iPos -1);
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iPos = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    cout<<"Enter the Position of Bit :\n";
    cin>>iPos;

    iRet = OnBit(iValue,iPos);
    cout<<"Updated value is :\n"<<iRet;
    return 0;
}