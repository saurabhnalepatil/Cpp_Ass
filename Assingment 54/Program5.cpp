/*
Write Java program which accept array from user and display below 
pattern.
Input : 8 9 7 6 4 2 4
Output :
* * * * * * * *
* * * * * *
* * * *
* *
* * * *

*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size = 0;
	int *p = NULL;
	void AcceptSize()
	{
		cout<<"Enter a number of element in  array :"<<endl;
		cin>>Size;
	}
	void MemoryAllo()
	{
		p = new int [Size];
	}
	void AcceptArr1()
	{
		cout<<"Enter first array element "<<Size<<endl;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>p[iCnt];
		}
	}
	void DisPattern()
	{
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] % 2) == 0)
			{
				while(p[iCnt] != 0)
				{
					cout<<" *";
					p[iCnt]--;
				}
				cout<<endl;
			}
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr1();
	cout<<"Display Pattern in array even element : "<<endl;
	obj.DisPattern();

	return 0;
}