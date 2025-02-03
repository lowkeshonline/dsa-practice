#include <iostream>
using namespace std;

void findGcd(int n1, int n2){
    int gcd = 0;
    int minimum = min(n1,n2);
    for(int i = minimum; i >= 1; i--){
        if(i / n1 == 0 && i / n2 == 0){
            gcd = i;
        }
    }
}


int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    findGcd(n1,n2);
    return 0;
}