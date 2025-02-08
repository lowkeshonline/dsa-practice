#include <iostream>
using namespace std;

//Reverse an array using the Recursion method

int twoPointerRev(int left , int right , int arr[]){
    if(left >= right){
        return 0;
    }
    swap(arr[left] , arr[right]);
    twoPointerRev(left+1 , right-1 , arr);
}

void onePointerRev(int i , int arr[] , int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i] , arr[n-i-1]);
    onePointerRev(i+1 , arr , n);
}

int main(){
    int arr[] = {1 , 4, 6, 7, 9, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    twoPointerRev(0 , n-1 , arr); // Comment out one method before run
    onePointerRev(0 , arr, n); // Comment out one method before code run
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}