/*
Write a program which return smallest element from singly linear linked 
list. 
Function Prototype :
int Minimum( PNODE Head); 
Input linked list : |110|->|230|->|20|->|240|->|640| 
Output : 20
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
	void InsertLast(int no){
		PNODE newn = NULL;
		PNODE temp = first;
		newn = newn NODE;

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
	void Display(){
		PNODE temp = first;
		while(temp  != NULL){
			cout<<"["<<temp->data<<"]-> ";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
	
}