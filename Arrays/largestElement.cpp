#include <bits/stdc++.h>
using namespace std;



// [2 , 44, 90, 12, 98, 21]

int main(){

    int arr[5] = { 2 , 90, 12, 98, 21};

    int largest = 0;

    for(int i = 1; i< 5; i++){
        if(arr[i] > arr[largest]){
            largest = i;
        }
    }

    cout << arr[largest] << "\n";

    return 0;
}