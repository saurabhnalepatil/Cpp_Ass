/*
Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
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

		cout<<"Check Character present or not in String =>"<<endl;
	}
	bool CaplaterCount(char *str)
	{
		int i = 0;
		while(str[i] != '\0')
		{
			if(str[i] == ch){
				return true;
			}
			str++;
		}
		return false;
	}
};

int main()
{
 	char Arr[1024];
 	bool bRet = false;
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    obj.AcceptChar();
    bRet = obj.CaplaterCount(Arr);
    if(bRet == true)
    {
    	cout<<"Character is present "<<endl;
    }
    else{
    	cout<<"Character is Absent "<<endl;
    }
	return 0;
}