/*
Write a program which reverse each element of singly linked list. 
Function Prototype :
void Reverse( PNODE Head); 
Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
Output : |11|->|82|->|71|->|14|->|6|->|98|
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
	void InsertLastNode(int no)
	{
		PNODE newn = NULL;
		PNODE temp = first;
		newn = new NODE;

		newn->data = no;
		newn->next = NULL;

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
			cout<<"["<<temp->data<<"]-> ";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
	void RevreseEle()
	{
		int digit = 0;
		PNODE temp = first;
		while(temp != NULL)
		{
			cout<<"[";
			while(temp->data != 0){
				digit = temp->data % 10;
				cout<<digit;
				temp->data /= 10;
			}
			cout<<"]-> ";
			temp = temp->next;
			digit = 0;
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
		obj.InsertLastNode(value);
	}

	cout<<"Display the Insert node in LinkedList :"<<endl;
	obj.Display();
	cout<<"Display the Revrese Ele. digit in LinkedList node Ele. :"<<endl;
	obj.RevreseEle();

	return 0;
}