#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* lchild;
    struct node* rchild;

    node(int d){
        this->data = d;
        this->lchild = NULL;
        this->rchild = NULL;
    }
}; 

void Insertnode(node* &head,int no)
{
    node* temp = head;
    node* newn = new node(no);

    if(head == NULL){
        head = newn;
    }
    else{
        while(1){
            if(temp->data == no){
                cout<<"Duplicate node"<<endl;
                delete newn;
                break;
            }
            else if(no < (temp->data))
            {
                if(temp->lchild == NULL){
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(no > (temp->data))
            {
                if(temp->rchild == NULL){
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
        }
    }
}

void Inorder(node* first)
{
    if(first != NULL){
        Inorder(first->lchild);
        cout<<first->data<<" ";
        Inorder(first->rchild);
    }
}

void Postorder(node* first)
{
    if(first != NULL){
        Postorder(first->lchild);
        Postorder(first->rchild);
        cout<<first->data<<" ";
    }
}

void Preorder(node* first)
{
    if(first != NULL){
        cout<<first->data<<" ";
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

int main(){
    node* first = NULL;
    int value = 0, no = 0;

    cout<<"Enter the number of LinkList to create : "<<endl;
    cin>>no;

    cout<<"Enter the node : "<<endl;
    for(int i = 0; i < no; i++){
    cin>>value;
    Insertnode(first,value);
    }

    cout<<endl<<"Display node in Inorder :"<<endl;
    Inorder(first);
    
    cout<<endl<<"Display node in Postorder :"<<endl;
    Postorder(first);
    
    cout<<endl<<"Display node in Preorder :"<<endl;
    Preorder(first);
}
