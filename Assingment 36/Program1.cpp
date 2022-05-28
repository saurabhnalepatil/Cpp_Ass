/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
A B C D
A B C D
A B C D
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
		for(i = 1; i <= iRow; i++)
		{
			for(j = 1,ch = 'A'; j <= iCol;ch++, j++)
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