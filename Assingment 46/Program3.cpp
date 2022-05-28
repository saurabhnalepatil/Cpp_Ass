/*
Write a recursive program which accept string from user and count number 
of small characters.
Input : HElloWOrlD
Output : 5
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CountSmall(char *str)
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

	///////Recrution////////
	int CountSmallR(char *str)
	{
		static int iCnt = 0,i = 0;
		if(str[i] != '\0')
		{
			if((str[i] >= 'a')&&(str[i] <= 'z'))
			{
				iCnt++;
			}
			str++;
			CountSmallR(str);
		}
		return iCnt;
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter the String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    int iRet = obj.CountSmallR(Arr);

    cout<<"Small Character frequency is  : "<<iRet;

    return 0;
}