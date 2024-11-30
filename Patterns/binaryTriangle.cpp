#include <bits/stdc++.h>
using namespace std;

void binaryTriangle(int n){
    //initialize a variable for binary number
    int print;
    //Loop for no of outer lines
    for(int i = 1; i <= n; i++){
        // if condition to assign 0 if line(i) is even & 1 if line(i) is odd
        (i%2 == 0) ? print = 0 : print = 1;
        // Inner Loop for printing the binary numbers
        for(int j = 1; j <= i; j++){
            cout << print << " ";
            //updating the number between 0 & 1 after each printing iteration.
            print = 1 - print;
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    binaryTriangle(n);
}