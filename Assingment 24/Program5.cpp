/*
Write a program which accept string from user reverse that string 
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Reverse(char *str)
	{
	    char *end = str, temp;
        while(*end != '\0')
        {
           end++;
        }
         end--;
        while(str < end)
        {
            temp = *str;
            *str = *end;
            *end = temp;

            str++;
            end--;
        }
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    obj.Reverse(Arr);

    cout<<"Modified string is : "<<Arr;
	return 0;
}