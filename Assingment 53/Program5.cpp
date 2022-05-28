/*
Write java program which accept marks of N students from user 
and display class of each student.
Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction
Input : 67.3 45.8 88.9 77.5 55.2
Output : 67.3 First class
45.8 Pass class
88.9 First class with Distinction
77.5 First class with Distinction
55.2 Second class
*/

#include<iostream>
using namespace std;

class Lucifer
{
public:
	int Size1 = 0;
	float *p = NULL;
	void AcceptSize()
	{
		cout<<"Enter a number of element in 1 array :"<<endl;
		cin>>Size1;
	}
	void MemoryAllo()
	{
		p = new float [Size1];
	}
	void AcceptArr()
	{
		cout<<"Enter first array element "<<Size1<<endl;
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{
			cout<<"Enter "<<iCnt+1<<" element : "<<endl;
			cin>>p[iCnt];
		}
	}
	void ResultDis()
	{
		for(int iCnt = 0; iCnt < Size1; iCnt++)
		{	
			if(p[iCnt] <= 35){
				cout<<p[iCnt]<<" => Fail"<<endl;
			}
			else if((p[iCnt] >= 35)&&(p[iCnt] <= 50)){
				cout<<p[iCnt]<<" => Pass Class"<<endl;
			}
			else if((p[iCnt] >= 50)&&(p[iCnt] <= 60)){
				cout<<p[iCnt]<<" => Second Class"<<endl;
			}
			else if((p[iCnt] >= 60)&&(p[iCnt] <= 70)){
				cout<<p[iCnt]<<" => First Class"<<endl;
			}
			else if((p[iCnt] >= 70)&&(p[iCnt] <= 100)){
				cout<<p[iCnt]<<" => First Class with Distinction"<<endl;
			}
		}
	}
};

int main()
{
	Lucifer obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	cout<<"Result Display of student declaration is : "<<endl;
	obj.ResultDis();

	return 0;
}