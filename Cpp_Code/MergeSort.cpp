#include<iostream>
using namespace std;

void MergeSort(int arr[], int temp[], int left, int mid, int right)
{
    int i, left_end, num_ele, temp_pos;

    left_end = mid - 1;
    temp_pos = left;
    num_ele = right - left + 1;

    while((left <= left_end) && (mid <= right))
    {
        if(arr[left] <= arr[mid]){
            temp[temp_pos] = arr[left];
            temp_pos = temp_pos + 1;
            left = left + 1;
        }
        else{
            temp[temp_pos] = arr[mid];
            temp_pos = temp_pos + 1;
            mid = mid + 1;
        }
    }

    while(left <= left_end){
        temp[temp_pos] = arr[left];
        left = left + 1;
        temp_pos = temp_pos + 1;
    }

    while(mid <= right){
        temp[temp_pos] = arr[mid];
        mid = mid + 1;
        temp_pos = temp_pos + 1;
    }

    for(int i = 0; i < num_ele; i++){
        arr[right] = temp[right];
        right = right - 1;
    }
} 

void M_Sort(int arr[], int temp[], int left, int right){
    int mid;
    if(right > left){
        mid = (right + left) / 2;

        M_Sort(arr, temp, left, mid);
        M_Sort(arr, temp, mid+1, right);
        MergeSort(arr, temp, left, mid+1, right);
    }
}

void Merge_Sort(int arr[], int temp[], int array_size){
    M_Sort(arr, temp, 0, array_size - 1);
}

void DisplayArrEle(int arr[],int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int len;
    int *Arr = NULL;

    cout<<"Enter length in array : "<<endl;
    cin>>len;

    Arr = new int[len];
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }
    int Brr[len];

    Merge_Sort(Arr,Brr,len);
    DisplayArrEle(Arr,len);
    
}