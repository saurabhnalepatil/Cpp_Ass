/*
Write a program which accept string from user and count number of 
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int CaplaterCount(char *str)
	{
		int i = 0,iCnt = 0;
		while(str[i] != '\0')
		{
			if(str[i] == ' '){
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

    cout<<"Count white space in String line => "<<iRet<<endl;

    return 0;
}