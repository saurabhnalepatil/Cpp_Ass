/*
Accept N numbers from user and display all such numbers which contains 
3 digits in it.
Input : N : 6 
Elements :8225 665 3 76 953 858
Output : 665 953 858
Program Layout :
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Digits(int Arr[], int iLen)
	{
		int iDigit = 0, jCnt = 0;
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			int temp = Arr[iCnt];
			while(Arr[iCnt] != 0)
			{
				iDigit = Arr[iCnt] % 10;
				jCnt++;
				Arr[iCnt] = Arr[iCnt] / 10;
			}
			if(jCnt == 3){
				cout<<temp<<endle;
			}
			jCnt = 0;
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
	cout<<"Three digit Display element in array is : "<<endl;
	obj.Digits(p,iSize);

	delete(p);

	return 0;
}