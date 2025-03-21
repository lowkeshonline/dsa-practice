#include <bits/stdc++.h>
using namespace std;

int main(){

    //Take an array
    vector<int> arr = {1 , 2, 2, 5, 9, 11};

    //check if array is sorted in a non descending order or not
    //Iterate the array from 1 to N
    for(int i = 1; i <= arr.size()-1; i++){
        //If the ith element is less than it's previous
        if(arr[i] < arr[i-1]){
            //Print false
            cout << "Array is not sorted";
        }
    }
    //Once the loop exits without triggering the if statement
    //Print True
    cout << "Array is sorted";

}