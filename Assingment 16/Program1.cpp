/*
Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Difference(int Arr[], int iLen)
	{
		int ESum = 0, OSum = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] % 2) == 0)
			{
				ESum = ESum + Arr[iCnt];
			}
			else{
				OSum = OSum + Arr[iCnt];
			}
		}
		return ESum - OSum;
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
	cout<<"Result is : "<<iRet;

	delete(p);

	return 0;
}