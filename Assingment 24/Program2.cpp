/*
Write a program which accept string from user and accept one 
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	char ch;
	void AcceptChar()
	{
		cout<<"Enter the character => "<<endl;
		cin>>ch;
	}
	int CaplaterCount(char *str)
	{
		int i = 0,iCnt = 0;
		while(str[i] != '\0')
		{
			if(str[i] == ch){
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
    obj.AcceptChar();
    int iRet = obj.CaplaterCount(Arr);

    cout<<"Frequency of you enter character is => "<<iRet;
   
	return 0;
}