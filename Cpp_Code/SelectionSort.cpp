#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        int min_index = i;
        for(int j = i; j < size; j++){
            if(arr[min_index] > arr[j]){
                swap(arr[min_index],arr[j]);
            }
        }
    }
    cout<<"Selection Sort is : "<<endl;
}

void DisplaySortArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
}

int main(){
    int even[7] = {8, 2, 4, 3, 5, 9, 1};

    SelectionSort(even,7);
    DisplaySortArr(even,7);
}