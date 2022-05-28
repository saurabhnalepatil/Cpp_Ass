/*
Write a program which display addition of digits of element from singly 
linear linked list. 
Function Prototype :int SumDigit( PNODE Head); 
Input linked list : |110|->|230|->|20|->|240|->|640| 
Output : 2 5 2 6 10
*/

#include<iostream>
using namespace std;

typedef struct node{
	int data;
	struct node *next;
}NODE, *PNODE;

class Singly_LinkedList
{
private:
	PNODE first;
	int size;
public:
	Singly_LinkedList(){
		first = NULL;
		size = 0;
	}
	void InsertLast(int no)
	{
		PNODE newn = NULL;
		PNODE temp = first;
		newn = new NODE;

		newn->next = NULL;
		newn->data = no;

		if(first == NULL){
			first = newn;
		}
		else{
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}
	void Display()
	{
		PNODE temp = first;
		while(temp != NULL){
			cout<<'['<<temp->data<<"]-> ";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
	void SumofDigit()
	{
		int Sum = 0, digit = 0;
		PNODE temp = first;
		while(temp != NULL)
		{
			while(temp->data != 0){
				digit = temp->data % 10;
				Sum += digit;
				temp->data = temp->data / 10;
			}
			cout<<"["<<temp<<"]-> Sum of digit : "<<Sum<<endl;
			temp = temp->next;
			Sum = 0;
		}
	}
};

int main()
{
	Singly_LinkedList obj;
	int value = 0, len = 0, item = 0;

	cout<<"Enter the length of node : "<<endl;
	cin>>len;

	cout<<"Enter data to InsertNode in LinkedList :"<<endl;
	for(int i = 1; i <= len; i++){
		cout<<"Enter "<<i<<" node Ele. : ";
		cin>>value;
		obj.InsertLast(value);
	}

	cout<<"Display the Insert node in LinkedList :"<<endl;
	obj.Display();
	cout<<"Display the Sum of digit in LinkedList node Ele. :"<<endl;
	obj.SumofDigit();

	return 0;
}