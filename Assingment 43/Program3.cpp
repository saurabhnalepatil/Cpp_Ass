/*
Write a program which returns addition of all element from singly linear 
linked list. 
Function Prototype :
int Addition( PNODE Head); 
Input linked list : |10|->|20|->|30|->|40| 
Output : 100
*/

#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class Singly_LinkedList
{
private:
	PNODE first;
	int size;

public:
	Singly_LinkedList();
	void InsertFirst(int no);
	void InsertLast(int no);
	inline void Display();
	int Addition();
};

Singly_LinkedList::Singly_LinkedList()
{
	first = NULL;
	size = 0;
}

Singly_LinkedList::~Singly_LinkedList()
{

}

void Singly_LinkedList::InsertFirst(int no)
{
	PNODE newn = new NODE;

	newn->data = no;
	newn->next = NULL;

	if(first == NULL){
		first = newn;
	}
	else{
		newn->next = first;
		first = newn;
	}
	size++;
}

void Singly_LinkedList::InsertLast(int no)
{
	PNODE temp = first;
	PNODE newn = new NODE;

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

void Singly_LinkedList::Display()
{
	PNODE temp = first;

	while(temp != NULL){
		cout<<"["<<temp->data<<"]-> ";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

void Singly_LinkedList::Addition()
{
	PNODE temp = NULL;
	temp = first;
	if(temp == NULL){
		cout<<"Empty List";
	}
	else{
		int i = 0,iCnt = 0;
		while(temp != NULL)
		{
			if(temp->data)
		}
	}
}