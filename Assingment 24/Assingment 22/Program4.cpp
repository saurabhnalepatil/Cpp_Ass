/*
Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	bool CheckVowel(char *str)
	{
		int i = 0;bool bAns = false;
		while(str[i] != '\0')
		{
			if((str[i]=='a')||(str[i]=='e')||(str[i]=='u')||(str[i]=='i')||(str[i]=='o'))
			{
				bAns = true;
			}
			str++;
		}
		return bAns;
	}
};

int main()
{
 	char Arr[1024];
    
    cout<<"Enter String : "<<endl;
    scanf("%[^'\n']s",Arr);

    Lucifer obj;
    bool bRet = obj.CheckVowel(Arr);

    cout<<"CheckVowel Present or not : "<<endl;
    if(bRet == true){
    	cout<<"Vowel is Present";
    }
    else{
    	cout<<"Vowel is Absent";
    }

    return 0;
}