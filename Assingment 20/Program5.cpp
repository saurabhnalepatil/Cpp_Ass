/*
Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	char ch = '\0';
	void AcceptChar()
	{
		cout<<"Enter the Characher :"<<endl;
		cin>>ch;
	}
	void DisplaySchedual()
	{
		if(ch == 'A'){
			cout<<"Your exam at 7.00 AM"<<endl;
		}
		else if(ch == 'B'){
			cout<<"Your exam at 8.30 AM"<<endl;
		}
		else if(ch == 'C'){
			cout<<"Your exam at 9.20 AM"<<endl;
		}
		else if(ch == 'D'){
			cout<<"Your exam at 10.30 AM"<<endl;
		}
		else{
			cout<<"Please rigth enter Division : "<<endl<<"Thank You";
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptChar();
	cout<<"Display Schedual Division of Student from user enter Div : "<<endl;
	obj.DisplaySchedual();

	return 0;
}