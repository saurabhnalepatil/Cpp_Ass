/*
Accept N numbers from user and display all such elements which are 
divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 85 80
Program Layout :
*/

#include<iostream>
#include<Stdlib.h>
using namespace std;
class Lucifer
{
private:
    int iSize;
public:
    Lucifer()
    {
        iSize = 0;
    }
    void Accept()
    {
        cout<<"Enter number of elements : ";
        cin>>iSize;
    }
    void ArrayX()
    {
        
        
        p = (int *)malloc(sizeof(int) * iSize);

        /*if(p == NULL){
        cout<<"Unable to allocate memory";
        return -1;
        }*/
        cout<<"Enter "<<iSize<<" elements in array : "<<endl;

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
        cout<<"Enter "<<iCnt + 1<<" elements : "<<endl;
        cin>>p[iCnt];
        } 
    }

    int Difference()
    {
    int iDiff = 0, iESum = 0, iOSum = 0;
    for(int iCnt = 0; iCnt < iSize ; iCnt++)
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
};

int main()
{
    int iRet = 0;
    
    Lucifer obj;
    obj.Accept();
    obj.ArrayX();
    iRet = obj.Difference();

    cout<<"Resultant Diff is : "<<iRet;

    return 0;
}