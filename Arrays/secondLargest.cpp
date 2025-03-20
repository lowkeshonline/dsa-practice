#include <bits/stdc++.h>
using namespace std;

// Optimal Approach

int main(){

    //create an array
    vector<int> arr = {39 , 12 , 43, 21 , 90, 89, 11};

    if(arr.size() == 1) return -1;

    //finding the Largest and second largest
    int largest = arr[0];
    int sLargest = -1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }

    //Print the second largest

    cout << sLargest << " ";    

}