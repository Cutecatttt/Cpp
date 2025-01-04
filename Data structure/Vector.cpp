#include <bits/stdc++.h>

using namespace std;
/*
vector<data_type> vector_name;
Vector là một container có tính chất tương tự như 1 mảng động, nó tự thay đổi kích thước khi bạn thêm hay xóa các phần tử trong mảng.

v.size(): Trả về số lượng phần tử trong vector.   => ĐPT O(1)
v.length(): Trả về số lượng phần tử trong vector. => ĐPT O(1)
v.push_back(a): Thêm phần tử a vào cuối vector.   => ĐPT O(1)
v.pop_back(): Xóa phần tử cuối cùng trong vector. => ĐPT O(1)
*/
int main(){
    int n; cin >> n;
    vector<int> a[n];
    for(int i = 0; i < n ; i++){
        int m; cin >> m;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            a[i].push_back(x);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
