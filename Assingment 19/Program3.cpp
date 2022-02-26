/*Accept N numbers from user and return the difference between largest 
and smallest number.
Input : N : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Differnce(int Arr[], int iLen)
	{
		int iCnt = 0, iMax = 0,iMin = Arr[iCnt];
		for(iCnt = 0; iCnt < iLen; iCnt++)
		{
			if(Arr[iCnt] > iMax)
			{
				iMax = Arr[iCnt];
			}
			if(Arr[iCnt] < iMin)
			{
				iMin = Arr[iCnt];
			}
		}
		return iMax - iMin;
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
	int iRet = obj.Differnce(p,iSize);

	cout<<"Differnce between Max or Min element in array is : "<<iRet<<endl;

	delete(p);
	return 0;
}