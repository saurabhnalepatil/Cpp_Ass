/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 3 iCol = 4
Output : 1 2 3 4
5 6 7 8
9 10 11 12
Program Layout : 
*/

#include<iostream>

using namespace std;

class Lucifer
{
public:
	void Pattern(int iRow, int iCol)
	{
		int i , j,iCnt = 1;
		char ch;
		cout<<"Pattern is : \n";
		for(i = 1; i <= iRow; i++)
		{
			for(j = 1; j <= iCol; j++)
			{
				cout<<" "<<iCnt;
				iCnt++;
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