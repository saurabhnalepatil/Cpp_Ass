/*
Write a recursive program which accept string from user and count white 
spaces.
Input : HE llo WOr lD
Output : 3
Prototype : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int WhiteSpace(char *str)
	{
		int iCnt = 0,i = 0;
		while(str[i] != '\0')
		{
			if(str[i] == ' ')
			{
				iCnt++;
			}
			str++;
		}
		return iCnt;
	}

	///////Recrution////////
	int WhiteSpaceR(char *str)
	{
		static int iCnt = 0,i = 0;
		if(str[i] != '\0')
		{
			if(str[i] == ' ')
			{
				iCnt++;
			}
			str++;
			WhiteSpaceR(str);
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
    int iRet = obj.WhiteSpaceR(Arr);

    cout<<"White Space frequency is  : "<<iRet;

    return 0;
}