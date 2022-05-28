/*
Write a program which display all palindrome elements of singly linked 
list. 
Function Prototype :
void DisplayPallindrome( PNODE Head); 
Input linked list : |11|->|28|->|17|->|414|->|6|->|89| 
Output : 11 6 414
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
	void PalindromeEle()
	{
		int digit = 0,Pali = 0;
		PNODE temp = first;
		while(temp != NULL){
			while(temp->data != 0){
				digit = temp->data % 10;
				Pali = (Pali*10)+digit;
				temp->data /= 10;
			}
			temp = temp->next;
			cout<<Pali<<" ";
			Pali = 0;
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
	cout<<"Check Palindrome elements in LinkedList node Ele. :"<<endl;
	obj.PalindromeEle();

	return 0;
}