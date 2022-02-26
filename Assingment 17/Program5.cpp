/*
Accept N numbers from user and accept one another number as NO , 
return frequency of NO form it.
Input : N :  
NO: 66
Elements :85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int iNo = 0;
	void AcceptValue()
	{
		cout<<"Enter the element to check to Frequency of Array in Present : "<<endl;
		cin>>iNo;
	}
	int Frequency(int Arr[], int iLen)
	{
		int i = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] == iNo))
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
	obj.AcceptValue();
	int iRet = obj.Frequency(p,iSize);
	cout<<"Frequency of your number array element is : "<<iRet;

	delete(p);

	return 0;
}