/*Write a program which search first occurrence of particular element from 
singly linear linked list. 
Function should return position at which element is found. 
Function Prototype :
int SearchFirstOcc( PNODE Head , int no ); 
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
Input element : 30 
Output : 3
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
	void InsertFirst(int no)
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
		PNODE Temp = first;
		while(Temp != NULL){
			cout<<"["<<Temp->data<<"]"<<"->";
			Temp = Temp->next;
		}
		cout<<"NULL"<<endl;
	}

	void SearchList(int iNo)
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
				if(temp->data == iNo){
					cout<<"Item found at Location : "<<(1+i);
				}
				else{
					iCnt++;
				}
				i++;
				temp = temp->next;
			}
			if(size == iCnt){
					cout<<"Item not found";
				}
		}
	}
};

int main()
{
	Singly_LinkedList obj;
	int iValue = 0, iLen = 0,item = 0;

	cout<<"Enter the Length of Contained :"<<endl;
	cin>>iLen;
	cout<<"Enter data to Insert :"<<endl;
	for(int i = 1; i <= iLen; i++){
		cout<<"Enter elements : "<<i<<"->";
		cin>>iValue;
		obj.InsertLast(iValue);
	}
	//obj.InsertFirst(iValue);
	obj.Display();
	cout<<"Enter the Search Elements : ";
	cin>>item;
	obj.SearchList(item);

	//obj.Display();

	return 0;
}
