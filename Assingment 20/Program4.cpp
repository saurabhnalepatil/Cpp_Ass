/*
Accept Character from user and check whether it is small case or 
not (a-z).
Input : g
Output : TRUE
Input : D
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
	bool CheckSmall()
	{
		if((ch >= 'a')&&(ch <= 'z'))
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
	cout<<"Check User enter Characher Small later or Not : "<<endl;
	bool bRet = obj.CheckSmall();

	if(bRet == true){
		cout<<"Characher is Small later"<<endl;
	}
	else{
		cout<<"Characher not Small later"<<endl;
	}

	return 0;
}