#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string name;
    int id;
    int age;
} SV;

int main()
{
    SV a;
    a.name = "Nguyen Van A";
    a.id = 20230000;
    a.age = 18;
    cout << a.name << endl;
    cout << a.id << endl;
    cout << a.age << endl;
    return 0;
}
