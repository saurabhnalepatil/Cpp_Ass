/*
Write a program which accept string from user and display it inn 
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Reverse(char *str)
	{
		int i = 0, j = 0;
    char temp;
    while(str[i] != '\0')
    {
        i++;
    }
    i--;
    while( i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i++;
    }
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    cout<<"Reverse String character and Display : "<<endl;
    Lucifer obj;
    obj.Reverse(Arr);

    return 0;
}