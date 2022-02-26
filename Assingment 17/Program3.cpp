/*
Accept N numbers from user check whether that numbers contains 11 in 
it or not.
Input : N : 6
Elements :85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements :85 66 3 80 93 88
Output : 11 is absent
Program Layout :
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	bool Check(int Arr[], int iLen)
	{
		for(int iCnt = 0; iCnt < iLen; iCnt++)
		{
			if((Arr[iCnt] == 11))
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
	cout<<"Check 11 Present or not : "<<endl;
	bool bRet = obj.Check(p,iSize);

	if(bRet == true){
		cout<<"11 is Present in array element"<<endl;
	}
	else{
		cout<<"11 is Absent in array element "<<endl;
	}

	delete(p);

	return 0;
}