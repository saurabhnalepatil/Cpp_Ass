/*
Write a java program which accept two two arrays from user and 
display minimum element of each array.
Input : 2 9 7 5 2 3
9 3 5 5
Output : 2 3
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
		int iCnt = 0, iMin = p[iCnt];
		for(iCnt = 0; iCnt < Size1; iCnt++)
		{	
			if(p[iCnt] < iMin){
				iMin = p[iCnt];
			}
		}
		return iMin;
	}
	int SumationArr2()
	{
		int iCnt = 0, iMin1 = q[iCnt];
		for(iCnt = 0; iCnt < Size1; iCnt++)
		{
			if(q[iCnt] < iMin1){
				iMin1 = q[iCnt];
			}
		}
		return iMin1;
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
	cout<<"Display Minimum element of first array : "<<iRet<<endl;
	int iRet2 = obj.SumationArr2();
	cout<<"Display Minimum element of Second array : "<<iRet2<<endl;

	return 0;
}