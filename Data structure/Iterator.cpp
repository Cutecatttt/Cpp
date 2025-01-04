#include <bits/stdc++.h>

using namespace std;

/*
<vector/set/map><data_type>::iterator iterator_name;
Iterator tương tự như con trỏ, nó trỏ tới các phần tử trong vector, set, map,...
Khi bạn muốn truy cập vào phần tử mà iterator trong vector đang trỏ tới bạn cần giải tham chiếu bằng toán tử * 
begin() : Iterator trỏ tới phần tử đầu tiên 
end() : Iterator trỏ tới phần tử sau phần tử cuối cùng 
rbegin() : Iterator ngược trỏ tới phần tử cuối cùng
rend() : Iterator ngược trỏ tới phần tử trước phần tử đầu tiên
Iterator trỏ tới phần tử có chỉ số x trong mảng là begin() + x
Iterator trong set và map chỉ hỗ trợ toán tử ++ và -- chứ không hỗ trợ toán tử -= và += như vector.

Từ khóa auto giúp tự suy luận ra kiểu dữ liệu phù hợp với biến thông qua giá trị bạn gán cho biến đó
!!!: Không thể khai báo biến có kiểu auto mà không khởi tạo giá trị cho nó 
*/

int main() {
    vector<int> v = {28, 100, 30, 20, 15};
    //duyet xuoi
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    //duyet nguoc
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    //Khong dung duoc begin() + a trong set va map
    cout << "Phan tu thu 2 trong day la: " << *(v.begin() + 2);
    return 0;
}
