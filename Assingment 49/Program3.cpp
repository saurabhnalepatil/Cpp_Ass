#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CountChar(char *str)
	{
		int iCnt = 0,i = 0;
		while(str[i] != '\0')
		{
			if(((str[i] >= 'a')&&(str[i] <= 'z'))||((str[i] >= 'A')&&(str[i] <= 'Z')))
			{
				iCnt++;
			}
			str++;
		}
		return iCnt;
	}

	///////Recrution////////
	int CountCharR(char *str)
	{
		static int iCnt = 0,i = 0;
		if(str[i] != '\0')
		{
			if(((str[i] >= 'a')&&(str[i] <= 'z'))||((str[i] >= 'A')&&(str[i] <= 'Z')))
			{
				iCnt++;
			}
			str++;
			CountCharR(str);
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
    int iRet = obj.CountCharR(Arr);

    cout<<"Character frequency is  : "<<iRet;

    return 0;
}