#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100], b;
    cin >> b;
    for(int i = 0; i < b; i++)
        cin >> a[i];
    int max = a[0];
    for(int i = 0; i < b; i++){
        int tong = 0;
        for(int j = i; j < b; j++){
            tong += a[j];
            if(tong > max)
                max = tong;
        }
    }
    cout << max;
    return 0;
}
