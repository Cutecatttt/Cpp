#include<bits/stdc++.h>

using namespace std;

int S[100], a[100], x;

int main() {
    cin >> x;
    for(int i = 0; i < x; i++)
        cin >> a[i];
    S[0] = a[0];
    for(int i = 1; i < x; i++){
        if(S[i-1] > 0){
            S[i] = S[i-1];
            S[i] += a[i];
        }
        else S[i] = a[i];
        if(S[i] > S[0]) S[0] = S[i];
    }
    cout << S[0];
    return 0;
}
