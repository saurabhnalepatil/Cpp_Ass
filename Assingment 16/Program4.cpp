/*
Accept N numbers from user and display all such elements which are 
divisible by 3 and 5.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 15
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Multiples(int Arr[], int iLen)
	{
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] % 5) == 0)
			{
				if((Arr[iCnt] % 3) == 0)
				{
					cout<<Arr[iCnt]<<endl;
				}
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

	cout<<"Enter "<<iSize<<" element : "<<endl;
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<"Enter element : "<<iCnt+1<<endl;
		cin>>p[iCnt];
	}

	Lucifer obj;
	cout<<"Display the element of Divisible by 3 & 5 : "<<endl;
	obj.Multiples(p,iSize);

	delete(p);
	return 0;

}
