/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 3 iCol = 5
Output : 
A A A A A
B B B B B
C C C C C
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
		char ch;
		cout<<"Pattern is : \n";
		for(i = 1,ch = 'A'; i <= iRow;ch++, i++)
		{
			for(j = 1; j <= iCol; j++)
			{
				cout<<" "<<ch;
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