#include <iostream>
using namespace std;

void isAPrime(int n){
    if(n == 1){
        cout << "The given number is not a prime.\n";
    }
    if(n == 2){
        cout << "The given number is a prime.\n";
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << "The given number is not a prime.\n";
        } else {
            cout << "The given number is a prime number\n";
        } 
        break;
    }

}

int main(){
    int n;
    cin >> n;
    isAPrime(n);
}