/*
 Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChecksBits(int iNo)
{
    UINT iMask = 0X80000001, iResult = 0;
    bool bAns = false;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        bAns = true;
    }
    return bAns;
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChecksBits(iValue);
    if(bRet == true){
        cout<<"First or Last Bit is ON";
    }
    else{
        cout<<"Bit is OFF";
    }
}