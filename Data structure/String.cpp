#include <bits/stdc++.h>

using namespace std;
/*
getline(cin, string, delimiter) dùng để đọc xâu đến khi gặp kí tự delimiter
Trước hàm getline() mà trong luồng cin có thừa kí tự enter thì phải dùng thêm hàm cin.ingore() trước đó

Để nối 2 xâu bạn có thể dùng toán tử +=
Để so sánh 2 xâu bạn có thể sử dụng luôn các toán tử so sánh như >, <, !=, ==...

s.length() và s.ize() Trả về độ dài xâu. => ĐPT O(1)
s.push_back(a):Thêm ký tự a vào cuối string. => ĐPT O(1)
s.pop_back(): Xóa đi ký tự cuối cùng trong string. => ĐPT O(1)
s.insert(index, string t): Chèn xâu t vào vị trí bất kỳ trong xâu hiện tại thông qua chỉ số index. => ĐPT O(N)
s.erase(pos, n): Xóa n ký tự trong xâu s tính từ chỉ số pos. => ĐPT O(N)
s.substr(pos, n): Trả về xâu con gồm n ký tự tính từ chỉ số pos của xâu s. => ĐPT O(N)
s.find(t): Tìm kiếm sự xuất hiện của xâu con t trong xâu hiện tại. => ĐPT O(N)
<Hàm sẽ trả về chỉ số đầu tiên của xâu con nếu xâu này tồn tại trong xâu đang tìm kiếm, ngược lại sẽ trả về giá trị là string::npos>
a.compare(b): So sánh 2 xâu a và b.
<Hàm trả về 0 khi hai xâu bằng nhau, trả về -1 nêu xâu a nhỏ hơn xâu b và trả về 1 nếu xâu a lớn hơn xâu b>
tolower(s[index]): Chuyển chữ về chữ in thường. => ĐPT O(1)
toupper(s[index]): Chuyển chữ về chữ in hoa. => ĐPT O(1)
stringstream ss(s): Biến xâu string s thành luồng (tương tự như luồng vào từ bàn phím là cin)

stoi(s)       Chuyển string thành số int
stoll(s)      Chuyển string thành số long long
stof(s)       Chuyển string thành số float
stod(s)	      Chuyển string thành số double
stold(s)      Chuyển string thành số long double
to_string(n)  Chuyển số thành xâu
*/
void email_1(string n, string s){
	s += ".";
	//tach ho va ten
	while(s.find(" ") != string::npos){
	    s[0] = toupper(s[0]);
	    int pos = s.find(" ");
	    s += s[0];
	    s.erase(0, pos+1);
	}
	s[0] = toupper(s[0]);
    n.erase(0, 2) ;
    s += n;
    s.insert(0, "email: ");
    s += "@sis.hust.edu.vn";
    cout << s << endl;
}

void email_2(string n, string s){
    stringstream ss(s);
    string tmp;
    string a = ".";
    //dich bit
    while(ss >> tmp){
        a+= toupper(tmp[0]);
    }
    tmp += a;
    tmp[0] = toupper(tmp[0]);
    tmp.pop_back();
    n.erase(0, 2) ;
    tmp += n;
    tmp.insert(0, "email: ");
    tmp += "@sis.hust.edu.vn";
    cout << tmp << endl;
}

void email_3(string n, string s){
    stringstream ss(s);
    string tmp;
    string a = ".";
    //tach ho va ten
    while(getline(ss, tmp, ' ')){
        a+= toupper(tmp[0]);
    }
    tmp += a;
    tmp[0] = toupper(tmp[0]);
    tmp.pop_back();
    n.erase(0, 2) ;
    tmp += n;
    tmp.insert(0, "email: ");
    tmp += "@sis.hust.edu.vn";
    cout << tmp << endl;
}

int main(){
    string n;
    cout << "nhap ma so sinh vien: ";
    cin >> n;
    string s;
    //xoa lenh xuong dong truoc do
    cin.ignore();
    //nhap xau co dau cach
    cout << "nhap ten sinh vien: ";
    getline(cin, s);
    //chuyen ve chu in thuong
    for(char &x : s){
	x = tolower(x);
    }
    email_1(n, s);
    email_2(n, s);
    email_3(n, s);
    return 0;
}
