/*
Write a program which returns addition of all even element from singly 
linear linked list. 
Function Prototype :
int AdditionEven( PNODE Head); 
Input linked list : |11|->|20|->|32|->|41| 
Output : 52
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
	int SumOfEvenEle()
	{
		int Sum = 0;
		PNODE temp = first;
		while(temp != NULL){
			if((temp->data % 2) == 0){
				Sum += temp->data;
			}
			temp = temp->next;
		}
		return Sum;
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
	int ret = obj.SumOfEvenEle();
	cout<<"Display the Sum of Even elements : "<<ret<<endl;

	return 0;
}