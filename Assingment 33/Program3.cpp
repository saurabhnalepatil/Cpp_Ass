/*
Write a program which accept number from user and return the 
count of digits in between 3 and 7.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
*/


#include<iostream>
using namespace std;

class Lucifer
{
public:
	int BetweenDigit(int iNo)
	{
		int iDigit = 0,iCnt = 0;
		if(iNo < 0){
			iNo = -iNo;
		}
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if((iDigit >= 3)&&(iDigit <= 7))
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
	int iRet = obj.BetweenDigit(iValue);

	cout<<"Count of 3 & 7 Digit between in number : "<<iRet<<endl;

	return 0;
}
