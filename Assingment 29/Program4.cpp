/*
Write a program which accept one number and position from user and 
toggle that bit. Return modified number.
Input : 10 3
Output : 14
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT togglebit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001, iResult = 0;
    if((iPos > 1) && (32 < iPos))
    {
        cout<<"Invalid Bit Number\n";
        return 0;
    }
    iMask = iMask<<(iPos -1);

    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iPos = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    cout<<"Enter the position of Bit :\n";
    cin>>iPos;

    iRet = togglebit(iValue,iPos);
    cout<<"Upadated Value is :\n"<<iRet;
    return 0;
}