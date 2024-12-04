#include <bits/stdc++.h>
using namespace std;

void decreasingNumberBox(int n){
    //Outer loop for the no of lines
    for(int i = 0; i < 2*n-1; i++){
        //inner loop for the printing the numbers
        for(int j = 0; j < 2*n-1; j++){
            // initializing variables for the top , left , bottom and right values
            int top = i;
            int left = j;
            int down = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            //printing the minimum value among all the top left bottom and right borders
            //by subtracting it from the n value
            cout << (n - min(min(top , down) , min(left , right)));
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    decreasingNumberBox(n);
}