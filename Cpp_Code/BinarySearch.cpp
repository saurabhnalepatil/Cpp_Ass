#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int size, int no){

    int start = 0;
	int end = size-1;
	int mid = (start + end)/2;
    
    while(start <= end){
		if(arr[mid] == no){
			return true;
		}
		else if(no > arr[mid]){
			start = mid + 1;
		}
		else if(no < arr[mid]){
			end = mid - 1;
		}
		mid = (start + end) / 2;
	}
    return false;
}
int main(){
    int even[7] = {4, 7, 9, 3, 1, 5, 6};
    int key = 0;

    cout<<"Enter the Search element in array : "<<endl;
    cin>>key;
    bool found = BinarySearch(even,7,key);

    if(found){
        cout<<"Key is Present in array."<<endl;
    }
    else{
        cout<<"Key is Not Present in array."<<endl;
    }
    
}