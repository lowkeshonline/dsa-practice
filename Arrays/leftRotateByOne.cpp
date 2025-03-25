#include <iostream>
using namespace std;

//Rotate an array by one place

int main(){

    //Taking an array
    vector<int> arr = {1, 3, 5, 7, 9 , 11, 13, 15};

    //Selecting the element's place in array
    int temp = arr[0];

    for(int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i];
    }

    arr[arr.size()-1] = temp;

    for(auto i : arr){
        cout << i << " ";
    }
    
    return 0;
}