#include<iostream>
using namespace std;

#define Size 50
char stack[Size];
int top = -1;

void push(char item){
    top++;
    stack[top] = item;
    return;
}
char pop(){
    char x;
    x = stack[top];
    top--;
    return(x);
}
char peak(){
    char x;
    x = stack[top];
    return(x);
}
int pr(char elem){
    switch(elem){
        case '#': return 0;
        case '(': return 1;
        case '+': 
        case '-': return 2;
        case '*': 
        case '/':return 3;
    }
}
int main(){
    char infx[50], pofx[50], ch, elem;
    int i = 0, k = 0;
    
    cout<<"Read the Infix Exression :"<<endl;
    cin>>infx;
    push('#');

    while((ch = infx[i++] != '\0')){
        if(ch == '(')
            push(ch);
        else if(isalnum(ch)) 
            pofx[k++] = ch;
        else{
            if(ch == ')'){
                while(peak() != '(')
                    pofx[k++] = pop();
                elem = pop();
            }
            else{
                while(pr(peak ()) >= pr(ch))
                    pofx[k++] = pop();
                push(ch);
            }
        }
        while(peak() != '#')
            pofx[k++] = pop();
        
        pofx[k] = '\0';

        cout<<"Infix Expn: "<<infx<<"Postfix Expn :"<<endl<<pofx;
    }
}