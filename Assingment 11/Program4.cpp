/*
Accept number of rows and number of columns from user and display below 
pattern.
Piyush Khairnar - 7588945488 आम्ही Technical संस्कार करतो !!! ©Marvellous Infosystems Page 3
Marvellous Logic Building Assignment : 11 
Input : iRow = 4 iCol = 5
Output : 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
Program 
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
        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                cout<<" "<<i;
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