/*
Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 0
Input : N : 6
Elements :85 11 3 15 11 111
Output : 2
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Frequency(int Arr[], int iLen)
	{
		int i = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] == 11))
			{
				i++;
			}
		}
		return i;
	}
};

int main()
{
	int iSize = 0;
	int *p = NULL;

	cout<<"Enter the number of element in array : "<<endl;
	cin>>iSize;

	//p = (int *)malloc(iSize * sizeof(int));
	p = new int;

	cout<<"Enter element"<<iSize<<endl;
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<"Enter element : "<<iCnt+1<<endl;
		cin>>p[iCnt];
	}

	Lucifer obj;
	int iRet = obj.Frequency(p,iSize);
	cout<<"Frequency of 11 in array element is : "<<iRet;

	delete(p);

	return 0;
}