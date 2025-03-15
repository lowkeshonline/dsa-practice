#include <bits/stdc++.h>
using namespace std;

int main(){

    //creating an array
    int arr[] = {92, 44, 93, 72, 13, 1, 34 , 93};

    //storing the length of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    //sorting the array
    sort (arr, arr+n);
    
    //finding the largest element
    int largest = arr[n-1];

    //finding the second largest
    int secondLargest = -1;
    for(int i = n-2; i >= 0; i--){
        if(arr[i] != largest){
            secondLargest = arr[i];
            break;
        }
    }

    //Sorted array
    cout << "Sorted array : ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << "\n";
    
    //Largest and second largest numbers
    cout << "Largest element : " << largest << "\n";
    if(secondLargest == -1){
        cout << "All the elements in array are same";
    } else {
        cout << "Second Largest element : " << secondLargest << "\n";
    }

}