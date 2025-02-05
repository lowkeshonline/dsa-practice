#include <iostream>
using namespace std;

int printNum(int count , int n){
    cout << count << " ";
    if(count == n){
        return count;
    }
    count++;
    printNum(count , n);
}

int main(){

    int n;
    int count = 1;
    cin >> n;
    printNum(count , n);
    return 0;
}