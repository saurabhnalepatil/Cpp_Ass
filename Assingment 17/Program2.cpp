/*
Accept N numbers from user and return difference between frequency of 
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Difference(int Arr[], int iLen)
	{
		int ECnt = 0, OCnt = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] % 2) == 0)
			{
				ECnt++;
			}
			else{
				OCnt++;
			}
		}
		return ECnt - OCnt;
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
	int iRet = obj.Difference(p,iSize);
	cout<<"Difference between in Even or odd number count is : "<<iRet;

	delete(p);

	return 0;
}