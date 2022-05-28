/*
Write a program which checks whether 15th bit is On or OFF.
Solution :
*/

#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    bool bAns = false;
    UINT iMask = 0X00004000;
    UINT iResult;

    iResult = iNo & iMask;
    if(iResult == iMask){
        bAns = true;
    }
    return bAns;
};

int main()
{
    UINT iValue = 0;
     bool bRet = false;

    cout<<"Enter Number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true){
        cout<<"15th Bit is ON";
    }
    else{
        cout<<"15th Bit is OFF";
    }
    return 0;
}