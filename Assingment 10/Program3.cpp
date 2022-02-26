/*
Accept number of rows and number of columns from user and display 
below pattern.
Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
Program Layout :
*/

#include<iostream>

using namespace std;

class Lucifer
{
public:
	void Pattern(int iRow, int iCol)
	{
		cout<<"Pattern is : \n";
		for(int i = 1; i <= iRow; i++)
		{
			for(int j = iCol; j >= 1; j--)
			{
				cout<<" "<<j;
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