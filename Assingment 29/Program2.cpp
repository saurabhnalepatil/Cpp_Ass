/*
Write a program which accept one number and position from user and off 
that bit. Return modified number.
Input : 10 2
Output : 8
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OFFBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001, iResult = 0;
    if((iPos < 1) && (iPos > 32))
    {
        cout<<"Invalid Bit";
        return 0;
    }
    iMask = iMask<<(iPos -1);
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
   UINT iValue = 0,iPos = 0, iRet = 0;

   cout<<"Enter the number :\n";
   cin>>iValue;

   cout<<"Enter position on Bit :\n";
   cin>>iPos;

   iRet = OFFBit(iValue,iPos);
   cout<<"Result is :\n"<<iRet;
    return 0;
}