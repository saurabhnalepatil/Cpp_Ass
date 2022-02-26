/* Accept Character from user and check whether it is digit or not 
(0-9).
Input : 7
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
	bool CheckDigit()
	{
		if((ch >= '0')&&(ch <= '9'))
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
	cout<<"Check User enter Characher Digit or Not : "<<endl;
	bool bRet = obj.CheckDigit();

	if(bRet == true){
		cout<<"Characher is Digit "<<endl;
	}
	else{
		cout<<"Characher not Digit"<<endl;
	}

	return 0;
}