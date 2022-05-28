#include<iostream>
using namespace std;

void SwapArrayEle(int Arr[],int size){

    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(Arr[i],Arr[i+1]);
        }
    }
}
void DisplayArray(int Arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<Arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int Arr[] = {3,4,8,7,9,6,5,2};
    SwapArrayEle(Arr,8);
    DisplayArray(Arr,8);
}