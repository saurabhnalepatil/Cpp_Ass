#include<iostream>
using namespace std;

int Partition(int arr[], int len, int size){
    int pivot = arr[len];
    int start = len;
    int end = size;
    int temp;

    while(start < end){
        while(arr[start] <= pivot) start++;
        while(arr[end] > pivot) end--;
        if(start < end){
            swap(arr[start],arr[end]);
        }  
    }
    swap(arr[len],arr[end]);
    return end;
}

void QuickSort(int arr[], int len, int size){
    int loc;
    if(len < size)
    {
        loc = Partition(arr,len,size);
        QuickSort(arr,len,loc-1);
        QuickSort(arr,loc+1,size);
    }
    return;
}

void DisplaySortArr(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int len = 0;
    int *Arr = NULL;

    cout<<"Enter the length of array : "<<endl;
    cin>>len;

    Arr = new int[len];
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }

    QuickSort(Arr,0,len-1);
    DisplaySortArr(Arr,len);
}