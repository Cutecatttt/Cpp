#include <bits/stdc++.h>

using namespace std;

/*
map<key_data_type, value_data_type> map_name
Các key trong map là riêng biệt, không có 2 key trùng nhau
Map duy trì thứ tự các phần tử theo giá trị key tăng dần
Map tìm kiếm giá trị key với độ phức tạp O(logN)
Map không hỗ trợ truy cập thông qua chỉ số như mảng hay vector, string.
Mỗi phần tử trong map chính là 1 pair

mp.size(): Trả về số phần tử trong map 
mp.insert(make_pair(key, value)): Thêm phần tử vào trong map. Ngoài ra có thể dùng map[key] = value để thêm mới hoặc thay đổi giá trị của value. => ĐPT O(logN)
mp.empty(): Kiểm tra vector rỗng
mp.clear(): Xóa toàn bộ phần tử trong map
mp.find(key): Tìm kiếm key trong tập danh sách, hàm sẽ trả về iterator tới cặp phần tử có key tương ứng, ngược lại sẽ trả về iterator end() của map. => ĐPT O(logN)
mp.count(key): Trả về số lần xuất hiện của key trong tập danh sách (chỉ có thể trả về 0 hoặc 1). => ĐPT O(logN)
mp.erase(key/iterator): xóa 1 cặp phần tử trong map thông qua key hoặc iterator. => ĐPT O(logN)
mp.lower_bound(a): Trả về iterator tới phần tử có giá trị key nhỏ nhất lớn hơn hoặc bằng giá trị a. => ĐPT O(logN)
mp.upper_bound(a): Trả về iterator tới phần tử có giá trị key lớn nhất lớn hơn giá trị a. => ĐPT O(logN)
*/

int main(){
    map<int, int> mp;
    mp.insert(make_pair(1, 2));
    mp.insert(make_pair(2, 4));
    mp.insert({3,5});
    mp.insert({4,6});
    mp[1] = 3;
    mp[5] = 7;
    if(mp.count(3) != 0){
        mp.erase(3);
    }
    for(pair<int, int> it : mp){
        cout << "key = " << it.first << ", value = " << it.second << endl;
    }
    return 0;
}

