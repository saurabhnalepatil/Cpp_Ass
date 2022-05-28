/*
Write a program which accept one number and position from user and 
check whether bit at that position is on or off. If bit is one return TURE 
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;
    bool bAns = false;

    iMask = iMask<<(iPos -1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        bAns = true;
    }
    return bAns;
}

int main()
{
    UINT iValue = 0, iPos = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter position of Bit : ";
    cin>>iPos;

    bRet = CheckBit(iValue,iPos);
    if(bRet == true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
    return 0;
}