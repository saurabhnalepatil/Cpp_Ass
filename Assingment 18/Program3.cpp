/*
Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int iNo = 0;
	void AcceptValue()
	{
		cout<<"Enter the number of element Check that no index : "<<endl;
		cin>>iNo;
	}
	int Check(int Arr[], int iLen)
	{
		for(int iCnt = iLen -1; iCnt >=  0; iCnt--)
		{
			if((Arr[iCnt] == iNo))
			{
				return iCnt;
			}
		}
		return -1;
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
	int iRet = obj.Check(p,iSize);

		cout<<"Check element last Occ Index no : "<<iRet<<endl;

	delete(p);
	return 0;
}