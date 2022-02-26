/*
Accept N numbers from user and accept Range, Display all elements from 
that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int iStart = 0, iEnd = 0;
	void AcceptValue()
	{
		cout<<"Enter the Starting point to array element : "<<endl;
		cin>>iStart;

		cout<<"Enter the Ending point to array element : "<<endl;
		cin>>iEnd;
	}
	void Display(int Arr[], int iLen)
	{
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] >= iStart)&&(Arr[iCnt] <= iEnd))
			{
				cout<<Arr[iCnt]<<endl;
			}
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
	obj.AcceptValue();
	cout<<"Display between no in array : "<<endl;
	obj.Display(p,iSize);

	delete(p);
	return 0;
}