/*
Write a recursive program which display below pattern. 
Output : 5 4 3 2 1
Prototype : 
*/


#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Pattern(int iNo)
	{
		while(iNo != 0)
		{
			cout<<iNo<<" ";
			iNo--;
		}
		cout<<endl;
	}

	///////Recrution////////

	static void PatternR(int iNo)
	{
		if(iNo != 0)
		{
			cout<<iNo<<" ";
			iNo--;
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