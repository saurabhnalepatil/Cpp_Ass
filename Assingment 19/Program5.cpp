/*
Accept N numbers from user and display summation of digits of each 
number.
Input : N : 6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21
Program Layout :
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void DigitSum(int Arr[], int iLen)
	{
		int iDigit = 0, iSum = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			while(Arr[iCnt] != 0)
			{
				iDigit = Arr[iCnt] % 10;
				iSum = iSum + iDigit;
				Arr[iCnt] = Arr[iCnt] / 10;
			}
			cout<<iSum<<endl;
			iSum = 0;
		}
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
	cout<<"Sum of digit element in array is : "<<endl;
	obj.DigitSum(p,iSize);

	delete(p);

	return 0;
}