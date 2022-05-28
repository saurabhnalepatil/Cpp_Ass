/*
Write a program which displays all elements which are perfect from singly 
linear linked list. 
Function Prototype :
int DisplayPerfect( PNODE Head); 
Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
Output : 6 28
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
			cout<<"["<<temp->data<<"]-> ";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}
	void PerfectEle()
	{
		PNODE temp = first;
		while(temp != NULL){
			if((temp->data % 2) == 0){
				cout<<temp->data<<" ";
			}
			temp = temp->next;
		}
	}
};

int main()
{
	Singly_LinkedList obj;
	int value = 0, iLen = 0, item = 0;

	cout<<"Enter the length of node :"<<endl;
	cin>>iLen;

	cout<<"Enter data to InsertNode :"<<endl;
	for(int i = 1; i <= iLen; i++){
		cout<<"Enter elements :"<<i<<"-> ";
		cin>>value;
		obj.InsertLast(value);
	}
	obj.Display();
	cout<<"Display the Perfect Ele. in LinkedList :"<<endl;
	obj.PerfectEle();

	return 0;
}