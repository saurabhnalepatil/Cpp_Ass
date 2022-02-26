/*
Accept N numbers from user and accept one another number as NO , 
check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE
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
		cout<<"Enter the number of element Check Present or not : "<<endl;
		cin>>iNo;
	}
	bool Check(int Arr[], int iLen)
	{
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] == iNo))
			{
				return true;
			}
		}
		return false;
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
	cout<<"Check element Present or not : "<<endl;
	obj.AcceptValue();
	bool bRet = obj.Check(p,iSize);

	if(bRet == true){
		cout<<"Element Present in array "<<endl;
	}
	else{
		cout<<"Element Absent in array "<<endl;
	}

	delete(p);
	return 0;
}