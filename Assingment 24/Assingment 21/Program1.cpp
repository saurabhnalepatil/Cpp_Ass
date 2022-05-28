/*
Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
    void DisplayASCII()
    {
        int i = 0;
        cout<<"ASCII table is \n";
        cout<<"====================================================================================================\n";
        cout<<"\t Decimal \t Hexadecimal \t Octal \t\t Character\n";
        cout<<"========================================================================================================\n";
        for(i= 0; i <=255; i++)
        {
             printf("\t %d \t\t %x \t\t %o \t\t %c\n",i,i,i,i);
        }
        cout<<"=============================================================================================================\n";
    }
};

int main()
{
    Lucifer obj;
    obj.DisplayASCII();
    return 0;
}