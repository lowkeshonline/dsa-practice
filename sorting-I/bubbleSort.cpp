//Bubble Sort is the most simplest algorithm among all the sorting algorithm it works by repeatedly swapping the adjacent elements if they are in the wrong order. Bubble sort algorithm is not useful for large data sets since it's average and worst time complexity are quite high

//Given Array : {33, 12, 89, 41, 9, 62, 28, 85, 24, 34, 91}

// Bubble sort Implementation
// Time Complexity : O(n^2)
// Space complexity : O(1)

#include  <bits/stdc++.h>
using namespace std;

int main(){
    //Creating an array
    int arr[] = {12 ,9 ,24 ,28 ,33 ,34 ,41 ,62 ,85 ,89 ,91};
    //Storing size of array in (n) variable
    int n = sizeof(arr) / sizeof(arr[0]);
    //Bubble sort Implementation
    for(int i = 0; i < n-1; i++){
        //swap check
        int isSwapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSwapped = true;
            }
        }
        //if no item is swapped in the inner loop then end sorting
        if(isSwapped == false){
            break;
        }
    }
    //Print the array
    for(int num : arr){
        cout << num << " ";
    }

}