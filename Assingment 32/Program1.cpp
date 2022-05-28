/*
Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)
Program Layout :
*/

#include<iostream>
#include<Stdlib.h>
using namespace std;
class Lucifer
{
    public void 
}
int Difference(int Arr[], int iLenght)
{
    int iDiff = 0, iESum = 0, iOSum = 0;

    for(int iCnt = 0; iCnt < iLenght ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
             iESum = iESum + Arr[iCnt];
        }
        else{
            iOSum = iOSum + Arr[iCnt];
        }
    }
    cout<<"Sum of Even No. : "<<iESum<<endl;
    cout<<"Sum of Odd NO. : "<<iOSum<<endl;

    iDiff = iESum - iOSum;
    return iDiff;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    cout<<"Enter number of elements : ";
    cin>>iSize;

    p = (int *)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        cout<<"Unable to allocate memory";
        return -1;
    }
    cout<<"Enter "<<iSize<<" elements in array : "<<endl;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<"Enter "<<iCnt + 1<<" elements : "<<endl;
        cin>>p[iCnt];
    }
    iRet = Difference(p,iSize);

    cout<<"Resultant Diff is : "<<iRet;

    free(p);

    return 0;
}