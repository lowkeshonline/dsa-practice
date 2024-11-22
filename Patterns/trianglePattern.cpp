#include <iostream>
using namespace std;

void trianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for(int star = 0; star < 2 * i + 1; star++){
            cout << "*";
        }
        for(int j = 0; j < n - i -1; j++){
            cout << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    trianglePattern(n);
}