/*
Write a program which accept string from user and copy that 
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”
*/

#include<iostream>
using namespace std;

void StrCpyRev(char * src)
{
	char *dest = src;
	char temp;
	while(*dest != '\0'){
		dest++;
	}
	dest--;
	while(src < dest)
	{
		temp = *src;
		*src = *dest;
		*dest = temp;

		src++;
		dest--;
	}
}

int main()
{
	char Arr[30];

	cout<<"Enter the String : "<<endl;
	scanf("%[^'\n']s",Arr);

	StrCpyRev(Arr);
	cout<<"Reverse String is : "<<endl<<Arr;

	return 0;
}