/*
Accept number of rows and number of columns from user and display 
below pattern.
Input : iRow = 4 iCol = 3
Output : 1 2 3
1 2 3
1 2 3
1 2 3
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
			for(int j = 1; j <= iCol; j++)
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