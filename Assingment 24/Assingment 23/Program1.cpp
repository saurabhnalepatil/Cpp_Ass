/*
Write a program which accept string from user and convert it into 
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
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
			if((str[i] >= 'A')&&(str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
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

    cout<<"Convert a String Capital later to small later => "<<endl;
    obj.CaplaterCount(Arr);

    return 0;
}