//Write a program which checks whether 7th & 15th & 21st , 28th bit
// is ON or OFF.

#include<iostream>
#include<stdbool.h>
using namespace std;
typedef unsigned int UINT;

bool ChecksBits(int iNo)
{
    UINT iMask = 0X08104040;
    UINT iResult = 0;
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChecksBits(iValue);
    if(bRet == true){
        cout<<"7th & 15th & 21st , 28th bit on";
    }
    else{
        cout<<"Bit is OFF";
    }
}