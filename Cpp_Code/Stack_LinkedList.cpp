#include<iostream>
using namespace std;

struct node {
	int data;
	node* link;
};
node* top = NULL;

void push(int item) {
	node* head = new node;

	head->data = item; 
	head->link = NULL;
	if (top == 0) {
		top = head;
	}
	else {
		head->link = top;
		top = head;
	}
	return;
}

int pop() {
	node* head;
	int item;

	if (top == 0) {
		cout << "stack is Empty" << endl;
		return -1;
	}

	item = top->data;
	head = top;
	top = top->link;
	delete head;
	return item;
}

int peak(){
    int item;
    if(top == 0){
        cout<<"Stack Empty: Cannot peak"<<endl;
        return -1;
    }
    item = top->data;
    return item;
}

void Display() {
	node* temp = top;

	while (temp != NULL){
		cout << "|" << temp->data << "|" << endl;
		temp = temp->link;
	}
}
int main() {

	push(15);
	push(81);
	push(78);
	push(91);
    cout<<"Display Stack Inserted node :"<<endl;
	Display();
    
    pop();
    cout<<"Display Stack after Pop funtion use :"<<endl;
    Display();

    cout<<"Display Stack Peak node element : "<<peak()<<endl;
}
	