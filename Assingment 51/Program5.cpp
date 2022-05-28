/*
Write Java program which accept two arrays from user and display 
summation of each array.
Input : 2 9 7 5 2 3
9 3 5 5
Output : 28 22
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size1 = 0, Size2 = 0, iSum1 = 0, iSum2 = 0;
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
	int SumationArr1()
	{
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{	
			iSum1 = iSum1 + p[iCnt];
		}
		return iSum1;
	}
	int SumationArr2()
	{
		
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			iSum2 = iSum2 + q[iCnt];
		}
		return iSum2;
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr1();
	obj.AcceptArr2();
	int iRet = obj.SumationArr1();
	cout<<"Display Sumation of first array : "<<iRet<<endl;
	int iRet2 = obj.SumationArr2();
	cout<<"Display Sumation of Second array : "<<iRet2<<endl;

	return 0;
}