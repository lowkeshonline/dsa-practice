#include <bits/stdc++.h>
using namespace std;

//Selection sort : It is a comparison based sorting algorithm. It is divided into two parts 1) Sorted 2) Unsorted. It repeatedly selects the smallest element from the unsorted array and shift it to the last position of the sorted array

//Time complexity : O(n^2)
//Space complexity : O(1)

int main(){
    //Create an array
    int arr[] = {58, 90, 41, 78, 33, 21, 82};
    //Storing the array size into a variable
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i<= n-2; i++){
        int min = i;
        for(int j = i; j <= n-1; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //Print the array
    for(int num : arr){
        cout << num << " ";
    }
}