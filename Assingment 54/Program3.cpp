/*
Write Java program which accept array of characters from user and 
accept one character. Return occurrence of that character without 
considering case.
Input : b N e B R b A i G i B
b
Output : 4
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size = 0;
	char *p = NULL,ch = '\0';
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
	void AcceptChar()
	{
		cout<<"Enter the character to count frequncy : "<<endl;
		cin>>ch;
	}
	int SearchChar()
	{
		int i = 0;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if(p[iCnt] == ch){
				i++;
			}
		}
		return i;
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	obj.AcceptChar();
	int iRet = obj.SearchChar();
	cout<<"Count your char frequncy in array is : "<<iRet<<endl;

	return 0;
}