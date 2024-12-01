#include <bits/stdc++.h>
using namespace std;

//Example 

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

void letterTriangle(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    letterTriangle(n);
}