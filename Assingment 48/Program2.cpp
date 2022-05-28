/*
Write a recursive program which display below pattern. 
Output : 1 2 3 4 5
Prototype :
*/


#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Pattern(int iNo)
	{
		int iCnt = 1;
		while(iNo != 0)
		{
			cout<<iCnt<<" ";
			iNo--;
			iCnt++;
		}
		cout<<endl;
	}

	///////Recrution////////

	static void PatternR(int iNo)
	{
		static int iCnt = 1;
		if(iNo != 0)
		{
			cout<<iCnt<<" ";
			iNo--;
			iCnt++;
		}
		PatternR(iNo);
		cout<<endl;
	}
};

int main()
{
	int iValue = 0;

	cout<<"Enter the Number : "<<endl;
	cin>>iValue;

	cout<<"Pattern is regarding condition : "<<endl;
	Lucifer obj;
	obj.PatternR(iValue);
    return 0;
}