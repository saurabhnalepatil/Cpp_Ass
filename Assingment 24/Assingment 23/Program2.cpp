/*
Write a program which accept string from user and convert it into 
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void CaplaterCount(char *str)
	{
		int i = 0;
		while(str[i] != '\0')
		{
			if((str[i] >= 'a')&&(str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				cout<<str[i];
			}
			else{
					cout<<str[i];
			}
			str++;
		}
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;

    cout<<"Convert a String small later to Capital later => "<<endl;
    obj.CaplaterCount(Arr);

    return 0;
}