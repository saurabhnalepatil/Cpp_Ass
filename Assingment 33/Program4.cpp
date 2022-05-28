/*
Write a program which accept number from user and return 
multiplication of all digits.
Input : 2395 
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/


#include<iostream>
using namespace std;

class Lucifer
{
public:
	int MultDigit(int iNo)
	{
		int iDigit = 0,iMult = 1;
		if(iNo < 0){
			iNo = -iNo;
		}
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		return iMult;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the number => "<<endl;
	cin>>iValue;

	Lucifer obj;
	int iRet = obj.MultDigit(iValue);

	cout<<"Multiplication of Digit in number : "<<iRet<<endl;

	return 0;
}
