/*
Write C++ program which accept two arrays from user and display 
odd contents of each array.
Input : 2 9 6 5 2 3
45 6 12 18 23 4
Output : 9 5 3 
45 23
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size1 = 0, Size2 = 0;
	int *p = NULL, *q = NULL;
	void AcceptSize()
	{
		cout<<"Enter a number of element in 1 array :"<<endl;
		cin>>Size1;

		cout<<"Enter a number of element in 2 array :"<<endl;
		cin>>Size2;
	}
	void MemoryAllo()
	{
		p = new int [Size1];
		q = new int [Size2];
	}
	void AcceptArr1()
	{
		cout<<"Enter first array element "<<Size1<<endl;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>p[iCnt];
		}
	}
	void AcceptArr2()
	{
		cout<<"Enter Second array element "<<Size2<<endl;
		for(int iCnt = 0; iCnt < Size2; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>q[iCnt];
		}
	}
	void DisplayArr1()
	{
		cout<<endl<<"Display Odd element first array :"<<endl;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			if((p[iCnt] % 2) != 0)
			{
				cout<<p[iCnt]<<" ";
			}
		}
	}
	void DisplayArr2()
	{
		cout<<endl<<"Display Odd element Second array :"<<endl;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			if((q[iCnt] % 2) != 0)
			{
				cout<<q[iCnt]<<" ";
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
	obj.AcceptArr2();
	obj.DisplayArr1();
	obj.DisplayArr2();

	return 0;
}