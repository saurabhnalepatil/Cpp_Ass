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
}NODE, *PNODE, **PPNODE;

class Singly_LinkedList
{
private:
	PNODE first;
	int size;

public:
	Singly_LinkedList()
	{
		first = NULL;
		size = 0;
	}
	void InsertNode(int no)
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
	void Dispaly()
	{
		PNODE Temp = first;
		while(Temp != NULL){
			cout<<"["<<Temp->data<<"]-> ";
			Temp = Temp->next;
		}
		cout<<"NULL"<<endl;
	}
	void SearchList
}