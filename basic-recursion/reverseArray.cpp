#include <iostream>
using namespace std;

//Reverse an array using the Recursion method

int revArray(int left , int right , int arr[]){
    if(left >= right){
        return 0;
    }
    swap(arr[left] , arr[right]);
    revArray(left+1 , right-1 , arr);
}

int main(){
    int arr[] = {1 , 4, 6, 7, 9, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    revArray(0 , n-1 , arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}