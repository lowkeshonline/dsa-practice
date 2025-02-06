#include <iostream>
using namespace std;

int printNameNTimes(int n){
    if(n <= 0){
        return 1;
    }
    cout << "Marvel ";
    printNameNTimes(n-1); 
}


int main(){
    int n;
    cin >> n;
    printNameNTimes(n);
    return 0;
}