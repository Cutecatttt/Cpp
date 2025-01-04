#include <bits/stdc++.h>

using namespace std;

struct sophuc{
    int a, b;
    //kieu_tra_ve operator (+,-...) (danh sach tham so){ // }
    sophuc operator + (const sophuc other){
        sophuc tong;
        tong.a = a + other.a;
        tong.b = b + other.b;
        return tong;
    }
};

int main() {
    sophuc a{1,2}, b{3,4};
    sophuc c = a +b;
    cout << c.a << " " << c.b;
}
