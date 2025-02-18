#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    // Outer loop goes from last index (n-1) to first index (0)
    for(int i = n-1; i>=0; i--){
        //Inner loop goes from first index to one element less than i value (i-1) to avoid runtime error
        for(int j = 0; j<= i-1; j++){
            //if arr[j] (first element) > (next element) 
            //swap
            if(arr[j] > arr[j+1]){
                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){
    //Initialize an array input
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //Function call
    bubbleSort(arr,n);
    //Print the array
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
}