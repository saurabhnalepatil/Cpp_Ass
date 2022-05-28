//Write a program which checks whether 5th & 18th bit is On or OFF.

#include<iostream>

using namespace std;
typedef int unsigned UINT;

bool ChkBit(UINT iNo)
{
    bool bAns = false;
    UINT iMask = 0X00040010;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask){
        bAns = true;
    }
    return bAns;
};

int main()
{
    bool bRet = false;
    int iValue = 0;
    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true){
        cout<<"5 & 18 Bit is ON";
    }
    else{
        cout<<"Bit is OFF";
    }
    return 0;
}
