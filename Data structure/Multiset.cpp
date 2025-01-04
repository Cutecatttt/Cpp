#include <bits/stdc++.h>

using namespace std;
/*
multiset<data_type> set_name;
Tương tự như set nhưng các phần tử trong multiset có thể trùng nhau
Sử dụng các hàm tương tự như trong set
s.erase(a): Xóa đi các phần tử có cùng giá trị a. => ĐPT O(logN)
s.erase(iterator): xóa đi phần tử mà iterator đang chỉ tới. => ĐPT O(1)
*/
int main() {
    //cho mang n phan tu va so nguyen k
    //in ra phan tu lon nhat trong moi day con lien tiep cho chieu dai k
    int n, k;
    cin >> n >>k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; i++){
         ms.insert(a[i]);
    }
    for(int i = k; i < n; i++){
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin();
    return 0;
}
