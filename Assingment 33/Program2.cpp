/*
Write a program which accept number from user and return the 
count of odd digits.
Input : 2395 
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int OddDigCou(int iNo)
	{
		int iDigit = 0,iCnt = 0;
		if(iNo < 0){
			iNo = -iNo;
		}
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2) != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the number => "<<endl;
	cin>>iValue;

	Lucifer obj;
	int iRet = obj.OddDigCou(iValue);

	cout<<"Count of Odd Digit in number : "<<iRet<<endl;

	return 0;
}
