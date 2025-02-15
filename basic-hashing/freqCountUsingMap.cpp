#include <iostream>
#include <map>
using namespace std;

int main(){

    //Arr Declaration
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //Counting
    map<int , int> mapArr;
    for(int i = 0; i < n; i++){
        mapArr[arr[i]]++;
    }

    //Print Map Array
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << mapArr[num] << " ";
    }

    return 0;
}