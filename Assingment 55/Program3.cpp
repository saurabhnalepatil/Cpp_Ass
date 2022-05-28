// Reverse the array elements in character array.
/*
Step 1: Start
Step 2: Accept the array length to user.
Step 3: Alloction to memory to array dynaminc.
		p = new char[Size];
Step 4: Accept the array element to user.
		for(int iCnt = 0; iCnt < Size; iCnt++)
			cin>>p[iCnt];
Step 5: Display Reverse element in array.
		for(int iCnt = Size; iCnt >= 0; iCnt--)	
			cout<<p[iCnt]<<" ";
Step 6: free memory.
Step 7: End
*/

#include<iostream>
using namespace std;

class CharArray
{
public:
	int Size = 0;
	char *p = NULL;
	void AcceptSize()
	{
		cout<<"Enter length of array :"<<endl;
		cin>>Size;
	}
	void MemoryAllo(){
		p = new char[Size];
	}
	void AcceptArr()
	{
		cout<<"Enter "<<Size<<" array element character format :"<<endl;
		for(int iCnt = 0; iCnt < Size; iCnt++){
			cin>>p[iCnt];
		}
	}
	void ReverseArr()
	{
		cout<<"Display the Reverse array element :"<<endl;
		for(int iCnt = Size-1; iCnt >= 0; iCnt--){	
			cout<<p[iCnt]<<" ";
		}
	}
	void MemoryDeAllo(){
		free(p);
	}
};

int main()
{
	CharArray obj;
	obj.AcceptSize();
	obj.MemoryAllo();
	obj.AcceptArr();
	obj.ReverseArr();
	obj.MemoryDeAllo();

	return 0;
}