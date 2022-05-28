#include<iostream>
using namespace std;

void SumTripletEle(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            for(int k = j+1; k < size; k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    cout<<arr[i]<<" ";
                    cout<<arr[j]<<" ";
                    cout<<arr[k]<<" ";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    int even[5] = {};
    int odd[5] = {1, -2, 1, 0, 5};
    int size;
    cout<<"Entet the length of array : "<<endl;
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>even[i];
    }
    SumTripletEle(even,5);
}