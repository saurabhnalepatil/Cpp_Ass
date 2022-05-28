/*
Write a recursive program which display below pattern. 
Output : a b c d e f
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Pattern(int iNo)
	{
		char ch = 'a';
		while(iNo != 0)
		{
			cout<<ch<<" ";
			iNo--;
			ch++;
		}
		cout<<endl;
	}

	///////Recrution////////

	static void PatternR(int iNo)
	{
		static char ch = 'a';
		if(iNo != 0)
		{
			cout<<ch<<" ";
			iNo--;
			ch++;
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