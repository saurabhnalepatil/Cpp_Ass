/*
Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CaplaterCount(char *str)
	{
		int iCnt = 0,iCnt2 = 0,i = 0;
		while(str[i] != '\0')
		{
			if((str[i] >= 'A')&&(str[i] <= 'Z'))
			{
				iCnt++;
			}
			else if((str[i] >= 'a')&&(str[i] <= 'z')){
				iCnt2++;
			}

			str++;
		}
		return iCnt2-iCnt;
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    int iRet = obj.CaplaterCount(Arr);

    cout<<"Diff between Small later or Capital later frequency is  : "<<iRet;

    return 0;
}