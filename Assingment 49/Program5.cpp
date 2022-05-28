/*
Write a recursive program which accept number from user and return its 
product of digits. 
Input : 523
Output : 30
Prototype :
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int ProdNum(int iNo)
	{
		int iMult = 1, iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		return iMult;
	}

	///////Recrution////////
	static int ProdNumR(int iNo)
	{
		static int iMult = 1, iDigit = 0;
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			iMult = iMult * iDigit;
			iNo = iNo / 10;
			ProdNumR(iNo);
		}
		return iMult;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	Lucifer obj;
    int iRet = obj.ProdNumR(iValue);

    cout<<"Product of all Digit is  : "<<iRet;

    return 0;
}