/*
Write a program which accept string from user and count number of 
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CaplaterCount(char *str)
	{
		int iCnt = 0,i = 0;
		while(str[i] != '\0')
		{
			if((str[i] >= 'A')&&(str[i] <= 'Z'))
			{
				iCnt++;
			}
			str++;
		}
		return iCnt;
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    int iRet = obj.CaplaterCount(Arr);

    cout<<"Capital later frequency is  : "<<iRet;

    return 0;
}