#include <bits/stdc++.h>
using namespace std;

//Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there is more than one such number, then output the one having the maximum absolute value.

    int closestNumber(int n, int m) {
          // code here
        int closest = 0;
        int minDiff = INT_MAX;
          
        for(int i = n - abs(m); i <= n + abs(m); i++){
            if(i % m == 0){
                int diff = abs(n-i);
                if(diff < minDiff || (diff == minDiff && abs(i) > abs(closest))){
                    closest = i;
                    minDiff = diff;
                }
            }
        }
        return closest;
    }

    int main(){
        int n;
        int m;

        cin >> n;
        cin >> m;

        int ans = closestNumber(n,m);
        cout << ans << "\n";
        return 0;
    }

