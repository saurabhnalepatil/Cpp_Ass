// Write a program which checks whether 7th & 8th & 9th bit is ON or OFF;

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChecksBits(int iNo)
{
    UINT iMask = 0X000001C0,iResult = 0;
    bool bAns = false;
    
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        bAns = true;
    }
    return bAns;
};

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChecksBits(iValue);
    if(bRet == true){
        cout<<"7th , 8th & 9th bit is ON";
    }
    else{
        cout<<"Bit is OFF";
    }
}