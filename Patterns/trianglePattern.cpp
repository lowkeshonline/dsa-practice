#include <iostream>
using namespace std;

void trianglePattern(int n){
    //Outer Loop for no of lines
    for(int i = 0; i < n; i++){
        //1st Inner loop for spaces
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        //2nd inner loop for the stars
        for(int star = 0; star < 2 * i + 1; star++){
            cout << "*";
        }
        //3rd inner loop for the spaces
        for(int j = 0; j < n - i -1; j++){
            cout << " ";
        }
        //Line break after printing the stars in each line
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    trianglePattern(n);
    return 0;
}