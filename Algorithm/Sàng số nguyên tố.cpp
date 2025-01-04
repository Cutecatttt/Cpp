#include <bits/stdc++.h>

using namespace std;

bool prime[1000000007];
int N;

void sieve(int n){
    for (int i = 2; i <= n; i++){
        prime[i] = true;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(prime[i]){
            for(int j = i*i; j <= n; j+=i){
                prime[j] = false;
            }
        }
    }
}

int main() {
    cin >> N;
    sieve(N);
    for(int i = 2; i <=N; i++){
        if(prime[i]){
            cout << i << " là số nguyên tố" << endl;
        }
    }
}
