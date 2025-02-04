#include <iostream>
#include <vector>
using namespace std;

void findDivisors(int n){
    vector<int> divisors;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            divisors.emplace_back(i);
            if(n/i != i){
                divisors.emplace_back(n/i);
            }
        }
    }
    for(int divisor : divisors){
        cout << divisor << " ";
    }
}


int main(){
    int n = 12;
    cout << "The divisors for the given number are : ";
    findDivisors(n);
    return 0;
}