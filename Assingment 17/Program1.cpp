/*
Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 3
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CountEven(int Arr[], int iLen)
	{
		int count = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] % 2) == 0)
			{
				count++;
			}
		}
		return count;
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
	int iRet = obj.CountEven(p,iSize);
	cout<<"Even element in Array is : "<<iRet;

	delete(p);

	return 0;
}