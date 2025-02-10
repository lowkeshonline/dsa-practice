#include <iostream>
using namespace std;

int main(){

    //Initializing an array
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //Initializing a hash array to store the frequency
    int hashArr[13] = {0};

    //Traversing OG array to store frequency in hash array
    for(int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }

    //Querying frequency of each num
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        cout << hashArr[n] << endl;
    }
    return 0;
}