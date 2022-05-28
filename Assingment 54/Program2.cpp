/*
Write Java program which accept array of characters from user and 
replace each capital character with its corresponding small character.
Input : b N e B R b A i G i
Output : 4
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
	int SmallCount()
	{
		int i = 0;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] >= 'a')&&(p[iCnt] <= 'z'))
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
	int iRet = obj.SmallCount();
	cout<<"Count Small later in array is : "<<iRet<<endl;

	return 0;
}