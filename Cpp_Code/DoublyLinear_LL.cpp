#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

class DoublyLinear_LL
{
private:
    node* head;
    int size;
public:
    DoublyLinear_LL(){
        head = NULL;
        size = 0;
    }
    ~DoublyLinear_LL(){
        node* temp = head;

        if(head != NULL){
            while(head != NULL){
                head = head->next;
                delete temp;
                temp = head;
            }
        }
    }
    void InsertFirst(int no)
    {
        node* newn = NULL;
        newn = new node;

        newn->prev = NULL;
        newn->next = NULL;
        newn->data = no;

        if(head == NULL){
            head = newn;
        }
        else{
            head->prev = newn;
            newn->next = head;
            head = newn;
        }+
        size++;
    }
    void InsertLast(int no)
    {
        node* newn = NULL;
        node* temp = head;

        newn = new node;

        newn->next = NULL;
        newn->prev = NULL;
        newn->data = no;

        if(head == NULL){
            head = newn;
        }
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newn;
            temp->prev = temp;
        }
        size++;
    }
    void InsertAtPos(int no, int Pos)
    {
        if(Pos == 1){
            InsertFirst(no);
        }
        else if(Pos == size+1){
            InsertLast(no);
        }
        else{
            node* newn = NULL;
            node* temp = head;

            newn = new node;

            newn->next = NULL;
            newn->prev = NULL;
            newn->data = no;

            for(int i = 0; i <= Pos-2; i++){
                temp = temp->next;
            }
            newn->next = temp->next;
            //temp->next->prev = newn;
            newn->prev = temp;
            temp->next = newn;
            
            size++;

        }
    }
    void DeleteFirst()
    {
        node* temp = head;
        head = head->next;
        head->prev = NULL;

        delete temp;
        size--;
    }
    void DeleteLast()
    {
        if(head->next == NULL){
            delete head;
            head = NULL;
        }
        else{
            node* temp = head;
            while((temp->next)!= NULL){
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
        }
        size--;
    }
    void DeleteAtPos(int Pos)
    {
        if(Pos == 1){
            DeleteFirst();
        }
        else if(Pos == size){
            DeleteLast();
        }
        else{
            node* temp = head;

            for(int i = 1; i < Pos-1; i++){
                temp = temp->next;
            }

            temp->next = temp->next->next;
            delete temp->next->prev;
            temp->next->prev = temp;
            size--;
        }
    }
    void Display()
    {
        node* temp = head;
        while(temp != NULL){
            cout<<"|"<<temp->data<<"|-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int Count(){
        return size;
    }
};

int main(){
    DoublyLinear_LL obj;

    cout<<"InsertFirst the Elements in Linked List :"<<endl;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.Display();
	int iRet = obj.Count();
	cout<<"Count in Number of node : "<<iRet<<endl<<endl;

	obj.InsertLast(101);
	obj.InsertLast(111);
	cout<<"InsertLast the Elements in Linked List :"<<endl;
	obj.Display();
	iRet = obj.Count();
	cout<<"After the InsertLast Number of node : "<<iRet<<endl<<endl;

	obj.InsertAtPos(75,3);
	cout<<"Insert At Position Elements in Linked List :"<<endl;
	obj.Display();
	iRet = obj.Count();
	cout<<"After the InsertAtPos Number of nodes : "<<iRet<<endl<<endl;

	obj.DeleteFirst();
	cout<<"Delete first Elements in Linked List :"<<endl;
	obj.Display();
	iRet = obj.Count();
	cout<<"Delete first node after number of node : "<<iRet<<endl<<endl;

	obj.DeleteLast();
	cout<<"Delete last node after Linked List :"<<endl;
	obj.Display();
	iRet = obj.Count();
	cout<<"Delete last node After number of node : "<<iRet<<endl<<endl;

	obj.DeleteAtPos(3);
	cout<<"Delete At Pos node after Linked List :"<<endl;
	obj.Display();
	iRet = obj.Count();
	cout<<"Delete At Pos After number of node : "<<iRet<<endl<<endl;

}