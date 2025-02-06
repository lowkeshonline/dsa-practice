#include <iostream>
using namespace std;

int printNto1(int i , int n){
    if(i > n){
        return i;
    }

    printNto1(i+1 , n);
    cout << i << " ";

}

int main(){
    int n;
    cin >> n;
    printNto1(1 , n);
}