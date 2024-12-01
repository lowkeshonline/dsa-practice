#include <bits/stdc++.h>
using namespace std;

//Example 

// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

void revLetterTriangle(int n){
    //Outer loop for printing the no.of lines
    for(int i = 1; i <= n; i++){
        //Initializing a character variable to start with A
        char ch = 'A';
        //Inner loop for printing the characters in reverse left skewed triangle
        for(int j = 1; j <= n-i+1; j++){
            //statement to print character variable
            cout << ch << " ";
            //incrementing char variable after each print
            ch++;
        }
        //statement for new line at the end of inner loop iterations
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    revLetterTriangle(n);
}