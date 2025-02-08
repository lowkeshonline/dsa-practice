#include <iostream>
using namespace std;

//Fibonacci using Recursion

int findFibonacci(int n){
    if(n <= 1){
        return n;
    }
    return findFibonacci(n-1) + findFibonacci(n-2);
} 

int main(){
    int n;
    cin >> n;
    cout << findFibonacci(n) << endl;
    return 0;
}