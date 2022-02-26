/*
Accept Character from user and check whether it is capital or not 
(A-Z).
Input : F
Output : TRUE
Input : d
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
		if((ch >= 'A')&&(ch <= 'Z'))
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
	cout<<"Check User enter Characher Capital or Not : "<<endl;
	bool bRet = obj.CheckAlpha();

	if(bRet == true){
		cout<<"Characher is Capital later"<<endl;
	}
	else{
		cout<<"Characher not Capital later"<<endl;
	}

	return 0;
}