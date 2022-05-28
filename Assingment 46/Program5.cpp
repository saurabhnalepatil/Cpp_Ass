/*
Write a recursive program which accept number from user and return its 
reverse number. 
Input : 523
Output : 325
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Reverse(int iNo)
	{
		int iDigit = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			cout<<iDigit;
			iNo = iNo / 10;
		}
	}

	///////Recrution////////

	void ReverseR(int iNo)
	{
		static int iDigit = 0;
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			cout<<iDigit;
			iNo = iNo / 10;
		}
		ReverseR(iNo);
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	cout<<"Reverse Number is  : "<<endl;
	Lucifer obj;
	obj.ReverseR(iValue);
    return 0;
}