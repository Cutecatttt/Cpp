#include <bits/stdc++.h>

using namespace std;

/*
set<data_type> set_name
Các phần tử trong set có giá trị khác nhau, không có 2 phần tử có cùng giá trị
Các phần tử trong set được tự động sắp xếp theo thứ tự tăng dần
Tìm kiếm phần tử trong set chỉ mất độ phức tạp O(logN)
Set không thể truy cập phần tử thông qua chỉ số như mảng hay vector, string

s.size(): Số lượng phần tử trong set. => ĐPT O(logN)
s.insert(a): Thêm phần tử a vào trong set. => ĐPT O(logN)
s.empty(): Kiểm tra set rỗng, nếu đúng trả về true, ngược lại trả về false
s.clear(): Xóa toàn bộ phần tử trong set.
s.count(a): Trả về số lần xuất hiện của phần tử a trong set (chỉ có thể trả về 0 hoặc 1). => ĐPT O(logN)
s.find(a): Tìm kiếm phần tử a trong set, hàm sẽ trả về iterator tới phần tử nếu tìm thấy, ngược lại sẽ trả về iterator end() của set. => ĐPT O(logN)
s.erase(a/iterator): Xóa phần tử a hoặc giá trị mà iterator đang trỏ tới trong set. => ĐPT O(logN)
s.lower_bound(a): Trả về iterator tới phần tử có giá trị nhỏ nhất lớn hơn hoặc bằng giá trị a. => ĐPT O(logN)
s.upper_bound(a): Trả về iterator tới phần tử có giá trị nhỏ nhất lớn hơn giá trị a. => ĐPT O(logN)

Dùng toán tử dải tham chiếu "*" để truy cập vào phần tử mà iterator trong vector đang trỏ tới

*/

int main() {
    int n; cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    cout << "so phan tu khac nhau la: " << s.size() << endl;
    cout << "cac phan tu trong set la: ";
    //duyet phan tu
    for(int x : s){
        cout << x << " ";
    }
    cout << endl << "Nhap 1 so bat ki: ";
    int a; cin >> a;
    //phan tu nho nhat be hon a
    if(s.upper_bound(a) != s.end()){
        cout << "Phan tu be nhat trong set lon hon so vua nhap la: " << *s.upper_bound(a);
    }
    else{
        cout << "Khong co phan tu nao trong set lon hon so vua nhap.";
    }
    return 0;
}
