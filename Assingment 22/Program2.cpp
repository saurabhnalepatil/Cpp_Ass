/*
Write a program which accept string from user and count number of 
small characters.
Input : “Marvellous”
Output : 9
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CharCount(char *str)
	{
		int iCnt = 0,i = 0;
		while(str[i] != '\0')
		{
			if((str[i] >= 'a')&&(str[i] <= 'z'))
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
    int iRet = obj.CharCount(Arr);

    cout<<"Small later frequency is  : "<<iRet;

    return 0;
}