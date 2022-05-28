#include<iostream>
using namespace std;

#define MAX 5
int top = -1;
int stack[MAX];

void push(int item){
    if(top == MAX-1){
        cout<<"Stack is full: Cannot push"<<endl;
        return;
    }
    top = top + 1;
    stack[top] = item;
    return;
}

int pop(){
    int item;
    if(top == -1){
        cout<<"Stack Empty: Connot Pop"<<endl;
        return -1;
    }
    item = stack[top];
    top = top -1;
    return item;
}
int peak(){
    int item;
    if(top == -1){
        cout<<"Stack Empty: Cannot peep"<<endl;
        return -1;
    }
    item = stack[top];
    return item;
}
void Display(){
    if(top == -1){
        cout<<"Stack is empty."<<endl;
        return;
    }
    for(int i = top; i >= 0; i--){
        cout<<"|"<<stack[i]<<"|"<<endl;
    }
    return;
}
int main(){
    push(45);
    push(75);
    push(95);
    push(35);
    push(76);
    cout<<"\nDisplay Stack array element :"<<endl;
    Display();
    
    pop();
    cout<<"\nDisplay Stack after Pop funtion use :"<<endl;
    Display();

    peak();
    cout<<"\nDisplay Stack Peak array element : "<<peak()<<endl;
}