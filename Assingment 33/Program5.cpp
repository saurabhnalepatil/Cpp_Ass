/*
Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/


#include<iostream>
using namespace std;

class Lucifer
{
public:
	int DiffBet(int iNo)
	{
		int iDigit = 0,ESum = 0, OSum = 0;
		if(iNo < 0){
			iNo = -iNo;
		}
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2) == 0){
				ESum++;
			}
			else{
				OSum++;
			}
			iNo = iNo / 10;
		}
		return OSum - ESum;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the number => "<<endl;
	cin>>iValue;

	Lucifer obj;
	int iRet = obj.DiffBet(iValue);

	cout<<"Diff between Even or odd Digit in number : "<<iRet<<endl;

	return 0;
}
