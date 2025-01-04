#include <bits/stdc++.h>

using namespace std;

/*
pair<datatype1, datatype1> v;
make_pair (a, b): khoi tao voi hai gia tri a va b
get<pos>(t) : lay ra phan tu o vi tri pos cua t
*/

int main() {
    pair<int,int> v = make_pair(100, 200);
    //pair<int,int> v = {100, 200};
    cout << v.first << endl;
    cout << v.second << endl;
    
    //tuple<datatype, datatype, ...> t;
    tuple<int, int, int> t = {100, 200, 300};
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;
}
