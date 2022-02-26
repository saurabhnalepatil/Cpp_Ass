/*
Accept Character from user and check whether it is alphabet or not 
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
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
	bool CheckAlpha()
	{
		if((ch >= 'A')&&(ch <= 'Z')||(ch >= 'a')&&(ch <= 'z'))
		{
			return true;
		}
	return false;
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptChar();
	cout<<"Check User enter Characher Alphabet or Not : "<<endl;
	bool bRet = obj.CheckAlpha();

	if(bRet == true){
		cout<<"Characher is Alphabet"<<endl;
	}
	else{
		cout<<"Characher not Alphabet"<<endl;
	}

	return 0;
}