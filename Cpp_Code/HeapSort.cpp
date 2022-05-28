#include<iostream>
#include<cmath>
using namespace std;

void SiftDown(int arr[], int root, int bottom)
{
    int done = 0, maxChild, temp;
    
    while((root * 2 + 1 <= bottom) && (!done))
    {
        if(root * 2 + 1 == bottom || arr[root*2+1] > arr[root*2+2]){
            maxChild = root * 2 + 1;
        }
        else{
            maxChild = root * 2 + 2;
        }

        if(arr[root] < arr[maxChild]){
            swap(arr[root],arr[maxChild]);
            root = maxChild;
        }
        else{
            done = 1;
        }
    }
}

void HeapSort(int  arr[], int len){
    int i, temp;

    for(i = (int)ceil((len / 2.0))-1; i >= 0; i--){
        SiftDown(arr,i,len);
    }
    for(i = len; i >= 1; i--){
        swap(arr[0],arr[i]);
        SiftDown(arr, 0, i - 1);
    }
}


void DisplayArrEle(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int len = 0;
    int *Arr = NULL;

    cout<<"Enter length in array : "<<endl;
    cin>>len;

    Arr = new int[len];

    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }

    HeapSort(Arr,len-1);
    DisplayArrEle(Arr,len);
}