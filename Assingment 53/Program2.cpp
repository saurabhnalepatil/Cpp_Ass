/*
Write java program which accept array from user and replace each 
member with summation of its digit.
Input : 89 687 56 549 87 9
Output : 17 21 11 18 15 9
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size1 = 0;
	int *p = NULL;
	void AcceptSize()
	{
		cout<<"Enter a number of element in 1 array :"<<endl;
		cin>>Size1;
	}
	void MemoryAllo()
	{
		p = new int [Size1];
	}
	void AcceptArr()
	{
		cout<<"Enter first array element "<<Size1<<endl;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>p[iCnt];
		}
	}
	void SumationEle()
	{
		int iDigit = 0, iSum = 0;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{	
			while(p[iCnt] != 0)
			{
				iDigit = p[iCnt] % 10;
				iSum = iSum + iDigit;
				p[iCnt] = p[iCnt] / 10;
			}
			cout<<iSum<<" ";
			iSum = 0;
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	cout<<"Sumation element in array is : "<<endl;
	obj.SumationEle();

	return 0;
}