#include <bits/stdc++.h>
using namespace std;

//Example - Input (5);

// E 
// E D 
// E D C 
// E D C B 
// E D C B A 

void alphaTriangle(int n){
    //Outer loop for the no of lines
    for(int i = 1; i <= n; i++){
        //Inner loop for printing the chars
        //From ('A' + n - 1) == 'E' To ('A' + n -i) == 'A' in decrementing order
        for(char ch = ('A' + n - 1); ch >= ('A' + n -i); ch--){
            cout << ch << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    alphaTriangle(n);
}