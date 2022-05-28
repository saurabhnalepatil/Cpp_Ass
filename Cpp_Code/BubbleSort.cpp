#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Bubble Sort is : "<<endl;
}
void DisplaySortArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int main(){
    int even[7] = {8, 6, 7, 1, 3, 2, 5};

    BubbleSort(even,7);
    DisplaySortArr(even,7);
}