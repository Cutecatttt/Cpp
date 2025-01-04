#include <iostream>

using namespace std;

int maxsub(int a[], int low, int high){
    if(low==high) return a[low];
    else{
        int mid = (low + high)/2;
        int wL = maxsub(a , low, mid);
        int wR = maxsub(a , mid+1, high);
        int wM = maxcrossmidpoin(a, low, mid, high);
        if(wL >= wR && wL >= wM) return wL;
        else if(wR >= wL && wR >= wM) return wR;
        else return wM;
    }
}
int maxcrossmidpoin(int a[], int low, int mid, int high){
    int maxL = a[mid];
    int maxR = a[mid +1];
    int count = 0;
    for(int i = mid; i >= 0; i--){
        count += a[i];
        if (count > maxL) maxL = count;
    }
    count = 0;
    for(int i = mid+1; i <= high; i++){
        count += a[i];
        if (count > maxR) maxR = count;
    }
    return maxL + maxR;
}
int main() {
    int a[100], x;
    cin >> x;
    for(int i = 0; i < x; i++)
        cin >> a[i];
    cout << maxsub(a, 0, x-1);
    return 0;
}
