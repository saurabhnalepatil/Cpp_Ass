/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
a b c d
A B C D
a b c d
Program Layout : 
*/
#include<iostream>

using namespace std;

class Lucifer
{
public:
	void Pattern(int iRow, int iCol)
	{
		int i , j;
		char ch,Ch;
		cout<<"Pattern is : \n";
		for(i = 1;  i <= iCol; i++)
		{
			for(j = 1,ch = 'A',Ch='a'; j <= iCol;Ch++,ch++, j++)
			{
				if((i % 2) == 0)
				{
					cout<<" "<<Ch;
				}
				else
				{
					cout<<" "<<ch;
				}
			}
			cout<<" "<<"\n";
		}

	}
};

int main()
{
	int iValue1 = 0, iValue2 = 0;

	cout<<"Enter number of Rows : ";
	cin>>iValue1;

	cout<<"Enter number of Columns : ";
	cin>>iValue2;

	Lucifer obj;
	obj.Pattern(iValue1,iValue2);

	return 0 ;
}