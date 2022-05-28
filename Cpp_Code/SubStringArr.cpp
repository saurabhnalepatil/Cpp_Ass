#include<iostream>
#include<string>
using namespace std;

bool SubString(string str1, string str2){
    for(int i = 0; i < str1.size(); i++){
        if(str1 == str2){
            return true;
        }
    }
    return false;
}
int main(){
    string str1,str2;

    cout<<"Enter String : "<<endl;
    cin>>str1;
    cin>>str2;

    bool ret = SubString(str1,str2);
    if(ret == true){
        cout<<"SubString is present."<<endl;
    }else{
        cout<<"SubString is Absent."<<endl;
    }
}