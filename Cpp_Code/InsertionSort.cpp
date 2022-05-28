#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size){

    int j = 0, key = 0;
	for(int i = 0; i < size; i++){
		key = arr[i];
		for(j = i -1; (j >= 0) && (arr[j] > key); j--){
			arr[j+1] = arr[j];
        }
		arr[j+1] = key;
	}
    cout<<"Insertion Sort is : "<<endl;
}
void DisplaySortArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
}
int main(){
    int even[7] = {5, 4, 6, 2, 7, 9, 1};

    InsertionSort(even,7);
    DisplaySortArr(even,7);
}