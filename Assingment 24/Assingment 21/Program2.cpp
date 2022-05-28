/*
Accept character from user. If character is small display its 
corresponding capital character, and if it small then display its 
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	char ch = '\0';
	void AcceptChar()
	{
		cout<<"Enter the Characher :"<<endl;
		cin>>ch;
	}
	void ConverChar()
	{
		if((ch >= 'a')&&(ch <= 'z'))
		{
			cout<<ch<<('a' - 'A')<<endl;
		}
		else if((ch >= 'A')&&(ch <= 'Z'))
		{
			cout<<ch + 32<<endl;
		}
		else{
			cout<<ch<<endl;
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptChar();
	cout<<"Convert a Characher : "<<endl;
	obj.ConverChar();

	return 0;
}