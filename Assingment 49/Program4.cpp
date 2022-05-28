/*
Write a recursive program which accept number from user and return its 
factorial. 
Input : 5
Output : 120
Prototype :
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Factorial(int iNo)
	{
		int iFact = 1, iDigit = 1;
		while(iNo != 0)
		{
			iFact = iFact * iDigit;
			iDigit++;
			iNo--;
		}
		return iFact;
	}

	///////Recrution////////
	static int FactorialR(int iNo)
	{
		static int iFact = 1, iDigit = 1;
		if(iNo != 0)
		{
			iFact = iFact * iDigit;
			iDigit++;
			iNo--;
			FactorialR(iNo);
		}
		return iFact;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	Lucifer obj;
    int iRet = obj.FactorialR(iValue);

    cout<<"Factorial of Number is  : "<<iRet;

    return 0;
}