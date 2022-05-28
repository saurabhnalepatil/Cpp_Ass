/*
Write a recursive program which display below pattern. 
Output : A B C D E F
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Pattern(int iNo)
	{
		char ch = 'A';
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
		static char ch = 'A';
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