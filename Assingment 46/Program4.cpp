/*
Write a recursive program which accept number from user and return 
smallest digit
Input : 87983
Output : 3
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int MinNum(int iNo)
	{
		int iMax = 0, iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit > iMax){
				iMax = iDigit;
			}
			iNo = iNo / 10;
		}
		return iMax;
	}

	///////Recrution////////
	int MinNumR(int iNo)
	{
		static int iMax = 0, iDigit = 0;
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit > iMax){
				iMax = iDigit;
			}
			iNo = iNo / 10;
			MinNumR(iNo);
		}
		return iMax;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	Lucifer obj;
    int iRet = obj.MinNumR(iValue);

    cout<<"Smallest digit is  : "<<iRet;

    return 0;
}