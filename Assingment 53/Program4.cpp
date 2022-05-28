/*
Write java program which accept array of characters from user and 
count number of capital characters.
Input : b N j B R b A d G G
Output : 6
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
	void MemoryAllo(){
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
	int CapitalCount()
	{
		int i = 0;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] >= 'A')&&(p[iCnt] <= 'Z'))
			{
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
	int iRet = obj.CapitalCount();
	cout<<"Count Capital later in array is : "<<iRet<<endl;

	return 0;
}