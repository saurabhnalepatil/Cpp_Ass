#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++){
        //maxi = max(maxi,arr[i]);
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i = 0; i < size; i++){
        //mini = min(mini,arr[i]);
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}
int main(){
    int even[5] = {2, 4, 6, 8, 10};
    int odd[5] = {3, 5, 7, 1, 9};

    int ret = getMax(even,5);
    cout<< "Maximum element in array is : "<<ret<<endl;

    int ret2 = getMin(even,5);
    cout<< "Minimum element in array is : "<<ret2<<endl;

}