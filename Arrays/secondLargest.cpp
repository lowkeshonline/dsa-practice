#include <bits/stdc++.h>
using namespace std;

// Better Approach

int main(){

    //create an array
    int arr[] = {39 , 12 , 43, 21 , 90, 11};

    //storing size of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    //sorting the array
    sort(arr , arr+n);

    //finding the largest first

    int largest = arr[0];
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //finding the second largest
    int secondLargest = -1;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > secondLargest){
            if(arr[i] != largest){
                secondLargest = arr[i];
            }
        }
    }

    cout << secondLargest << " ";    

}