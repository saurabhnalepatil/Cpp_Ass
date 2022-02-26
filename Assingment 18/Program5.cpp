/*
Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements :15 66 3 70 10 88
Output : 45
Input : N : 6
Elements :44 66 72 70 10 88
Output : 0
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int ProductOdd(int Arr[], int iLen)
	{
		int iMult = 1;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] % 2) != 0)
			{
				iMult = iMult * Arr[iCnt];
			}
		}
		return iMult;
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
	int iRet = obj.ProductOdd(p,iSize);

	cout<<"Product Odd element in array is : "<<iRet<<endl;

	delete(p);
	return 0;
}