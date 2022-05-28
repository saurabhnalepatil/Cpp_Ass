#include<iostream>
using namespace std;

class stack{
    public:
    char data;
    stack* next;
};

stack* tip = 0;

void push(char ch){
    stack* temp=new stack;
    temp->data=ch;
    temp->next=tip;
    tip=temp;
    return;
}

void pop(){
    stack* temp=tip;
    tip=tip->next;
    delete temp;
    return;
}

char top(){
    return tip->data;

}

bool empty(){
    if(tip==0){
        return true;
    }else {
        return false;
    }
}

bool parenthesis(string s, int len){
    

    int i=0;
    bool flag=false;
    while(i<len){
        char ch=s[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            push(ch);
            flag=true;
        }else{
            if(empty()==true){
                return false;
            }
            if(top()=='(' && ch==')'){
                pop();
            }else if(top()=='[' && ch==']'){
                pop();
            }else if(top()=='{' && ch=='}'){
                pop();
            }else{
                return false;
            }
        }

        i++;
    }
    if(empty()==false){
        return false;
    }

  

    return true;
}


int main(){

    string s="";
    cout <<" Enter the brackets : "<<endl;
    cin>>s;

    bool flag = parenthesis(s,s.length());

    if(flag==true){
        cout<<"true";
    }else{
        cout<<"false";
    }

}