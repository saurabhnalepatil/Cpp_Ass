/*
Write a program which accept string from user and display only 
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
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
			if((str[i] >= '0')&&(str[i] <= '9'))
			{
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

    cout<<"Only Display in digit => "<<endl;
    obj.CaplaterCount(Arr);

    return 0;
}