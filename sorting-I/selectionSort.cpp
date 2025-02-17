#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n){
    //Outer loop goes till less than last element
    for(int i = 0; i < n-1; i++){
        //consider the [i] as the least for now
        int min = i;
        //Compare it with each element that comes after [i]
        for(int j = i+1; j < n; j++){
            //Update the min value to j if any element is found to be smaller than i
            if(arr[i] > arr[j]){
                min = j;
            }    
        }
        //Swap the min and i variables
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    // Print the sorted array after the loop exections are done
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    //Initialize and array input
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    //Funtion call
    selectionSort(arr , n);
}