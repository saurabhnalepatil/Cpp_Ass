/*
Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output :
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5
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
                    cout<<"  "<<i;
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

