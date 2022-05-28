/*
Write Java program which accept array of characters from user and 
return difference between frequency of capital and frequency of small 
characters.
Input : b N e B R b A I O G i
Output : 3 (7 - 4)
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
	int Differnce()
	{
		int i = 0,j = 0;
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] >= 'a')&&(p[iCnt] <= 'z'))
			{
				i++;
			}
		}
		for(int iCnt = 0; iCnt < Size; iCnt++)
		{	
			if((p[iCnt] >= 'A')&&(p[iCnt] <= 'Z'))
			{
				j++;
			}
		}
		return j - i;
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	int iRet = obj.Differnce();
	cout<<"Count Diff between capital or Small later in array is : "<<iRet<<endl;

	return 0;
}