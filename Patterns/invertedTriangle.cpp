#include <iostream>
using namespace std;

void invertedTriangle(int n){
    //Outer loop for the no of lines
    for(int i = 0; i < n; i++){
        //Loop for printing spaces
        for(int space = 0; space < i; space++){
            cout << " ";
        }
        //Loop for printing stars
        for(int star = 0; star < 2 * n - (2 * i + 1); star++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    invertedTriangle(n);
}