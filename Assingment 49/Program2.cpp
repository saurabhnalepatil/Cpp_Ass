/*
Write a recursive program which accept number from user and return 
summation of its digits.
Input : 879
Output : 24
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int SumofDigit(int iNo)
	{
		int iSum = 0, iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
		}
		return iSum;
	}

	///////Recrution////////
	static int SumofDigitR(int iNo)
	{
		static int iSum = 0, iDigit = 0;
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
			SumofDigitR(iNo);
		}
		return iSum;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	Lucifer obj;
    int iRet = obj.SumofDigitR(iValue);

    cout<<"Sum of all Digit is  : "<<iRet;

    return 0;
}