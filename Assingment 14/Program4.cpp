/*
Accept number of rows and number of columns from user and display below 
pattern.
Piyush Khairnar - 7588945488 आम्ही Technical संस्कार करतो !!! ©Marvellous Infosystems Page 3
Marvellous Logic Building Assignment : 14 
Input : iRow = 6 iCol = 6
Output :
* * * * * *
* *       *
*   *     *
*     *   *
*       * *
* * * * * *
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
			for(j = 1; j <= iCol; j++)
			{
				if((i==j)||(i==1)||(j==1)||(j==iCol)||(i==iRow))
				{
					cout<<" * ";
				}
				else{
					cout<<"   ";
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