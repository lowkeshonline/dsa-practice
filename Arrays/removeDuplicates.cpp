#include <bits/stdc++.h>
using namespace std;

//Remove duplicates from sorted array


//Brute force approach
int main(){
    //Take a sorted array
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4};
    //Create a set
    set<int> st;
    //Store all the unique elements from arr to set
    for(int i = 0; i < arr.size(); i++){
        st.insert(arr[i]);
    }
    //Replace all the set elements into arr in place
    int index = 0;
    for(auto it:st){
       arr[index] = it;
       index++; 
    }
    //Print the arr
    for(int num : arr){
        cout << num << " ";
    }
    //Return the number of unique elements
    cout << "\n" << index << "\n";

    return 0;
}