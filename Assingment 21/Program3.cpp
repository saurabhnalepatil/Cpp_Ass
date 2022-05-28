/*
Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *).
Input : %
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
	bool CheckSpeSy()
	{
		if((ch >= '!')&&(ch <= '*'))
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
	bool bRet = obj.CheckSpeSy();

	if(bRet == true){
		cout<<"Characher is Special symbol"<<endl;
	}
	else{
		cout<<"Characher not Special symbol"<<endl;
	}

	return 0;
}