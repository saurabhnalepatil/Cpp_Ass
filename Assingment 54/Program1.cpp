/*
Write Java program which accept array of characters from user and 
replace each capital character with its corresponding small character.
Input : b N j B R b A d G G
Output : b n j b r b a d g g
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size = 0;
	char *p = NULL;
	void AcceptSize()
	{
		cout<<"Enter a number of element in  array :"<<endl;
		cin>>Size;
	}
	void MemoryAllo()
	{
		p = new char[Size];
	}
	void AcceptArr()
	{
		cout<<"Enter first array element "<<Size<<endl;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>p[iCnt];
		}
	}
	void ConvertChar()
	{
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] >= 'A')&&(p[iCnt] <= 'Z'))
			{
				p[iCnt] = p[iCnt]+32;
				cout<<p[iCnt]<<" ";
			}
			else{
				cout<<p[iCnt]<<" ";
			}
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	cout<<"Convert character Capital to small later : "<<endl;
	obj.ConvertChar();

	return 0;
}