#include<iostream>
#include<stack>
//#include<string>
using namespace std;

bool CheckParanthesis(string arr,int len){
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
        }else if(s.empty()==true){
                return false;
           
        }
        else if(arr[i] == ')' && s.top()=='('){
            s.pop();
        }
        else if(arr[i] == '}' && s.top()=='{'){
            s.pop();
        }
        else if(arr[i] == ']' && s.top()=='['){
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
    string str = "";

    cout<<"Enter the String in Paranthesis pattern :"<<endl;
    cin>>str;
   
    bool ret = CheckParanthesis(str, str.size());
    if(ret == true){
        cout<<"True";
    }else{
        cout<<"False";
    }
}