#include<iostream>
#include<stack>
#include<vector>

using namespace std;

bool CheckParanthesis(vector<char>arr,int len){
    stack<int> s;
    for(int i = 0; i < len; i++){
        if(arr[i] == '('){
            s.push('(');
        }
        else if(arr[i] == '{'){
            s.push('{');
        }
        else if(arr[i] == '['){
            s.push('[');
        }
        else if(arr[i] == ')'){
            s.pop();
        }
        else if(arr[i] == '}'){
            s.pop();
        }
        else if(arr[i] == ']'){
            s.pop();
        }
    }
    if(!s.empty()){
        return false;
    }else{
        return true;
    }
}
int main(){
    vector<char>p;
    
    //cout<<"Enter length in array :"<<endl;
    //cin>>len;

   
    for(int i = 0; p[i]== -1 ; i++){
        cin>>p[i];

    }
    p.pop_back();
    bool ret = CheckParanthesis(p, p.size());
    if(ret == true){
        cout<<"True";
    }else{
        cout<<"False";
    }
}