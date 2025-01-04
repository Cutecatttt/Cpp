#include <bits/stdc++.h>

using namespace std;

int N;

void sieve(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i==0){
            cout << i << " ";
            n = n/i;
        }
    }
    if(n != 1) cout << n;
}

int main() {
    cin >> N;
    sieve(N);
}
