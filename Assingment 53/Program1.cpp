/*
Write java program which accept array from user and reverse each 
number of that array.
Input : 89 687 56 549 87 9
Output : 98 786 65 945 78 9
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
	void ReverseEle()
	{
		int iDigit = 0;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{	
			while(p[iCnt] != 0)
			{
				iDigit = p[iCnt] % 10;
				cout<<iDigit;
				p[iCnt] = p[iCnt] / 10;
			}
			cout<<" ";
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	cout<<"Reverse element in array is : "<<endl;
	obj.ReverseEle();

	return 0;
}