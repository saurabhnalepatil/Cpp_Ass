/*
Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : 
H e l l o
H e l l o
H e l l o
H e l l o
Program Layout : 
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	void Pattern(char *str)
	{
		
		for(int i = 0; i <= len; i++){
			for(int j = 0; j <= len; j++){
				cout<<str[j]<<" ";
			}
			cout<<"\n";
		}
	}
};

int main()
{
	char Arr[30];

	cout<<"Enter the String : "<<endl;
	scanf("%[^'\n']s",Arr);

	Lucifer obj;
	cout<<"Display the following Pattern :"<<endl;
	obj.Pattern(Arr);

	return 0;
}