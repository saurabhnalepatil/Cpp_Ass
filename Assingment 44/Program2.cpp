/*
Write a program which displays all elements which are prime from singly 
linear linked list. 
Function Prototype :
int DisplayPrime( PNODE Head); 
Input linked list : |11|->|20|->|17|->|41|->|22|->|89| 
Output : 11 17 41 89
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
	void PrimeNodeEle()
	{
		PNODE temp = first;
		while(temp != NULL){
			if((temp->data % 2) != 0){
				cout<<temp->data<<" ";
			}
			temp = temp->next;
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
	cout<<"Display the Prime Ele. in LinkedList :"<<endl;
	obj.PrimeNodeEle();

	return 0;
}