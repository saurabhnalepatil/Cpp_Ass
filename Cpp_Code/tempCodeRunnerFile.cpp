#include<iostream>
using namespace std;




struct node{
    int data;
    node* link;
};

node* first = 0, *last = 0;

void enqueue(int no){
    node* head = new node;
    head->data = no;
    head->link = NULL;

    if(first == 0){
        first = last = head;
    }
    else{
        last->link = head;
        last = head;
    }
    return;
}
int dequeue(){
    int no;
    node* head;
    if(first == 0 && last == 0){
        cout<<"Que is empty"<<endl;
        return -1;
    }
    no = first->data; 
    head = first;
    if(first == last){
        first = last = 0;
    }
    else{
        first = first->link;
        delete head;
    }
    return no;
}
void Display() {
	node* temp = first;

	while (temp != NULL){
		cout << "|" << temp->data << "|" << endl;
		temp = temp->link;
	}
}
int main(){
    enqueue(95);
    enqueue(84);
    enqueue(46);
    enqueue(34);

    Display();


}