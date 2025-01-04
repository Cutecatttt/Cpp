#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

// Hàm kiểm tra xem ký tự có phải là toán tử hay không
int isOperator(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '%' || op == '/' || op == '^');
}

// Hàm trả về độ ưu tiên của toán tử
int priority(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '%' || op == '/') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return 0;
}

// Hàm chuyển biểu thức từ dạng trung tố sang dạng hậu tố
void chuyenSangHauTo(const char *eq) {
    int len = strlen(eq);
    char *retVal = new char[len + 1];
    stack<char> myStack;
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (eq[i] != '(' && eq[i] != ')') {
            if (!isOperator(eq[i])) { // Toán hạng
                retVal[j++] = eq[i];
            } else { // Toán tử
                while (!myStack.empty() && myStack.top() != '(' && priority(eq[i]) <= priority(myStack.top())) {
                    if (eq[i] == '^' && myStack.top() == '^') {
                        break; // Right associative case for ^
                    }
                    retVal[j++] = myStack.top();
                    myStack.pop();
                }
                myStack.push(eq[i]);
            }
        } else { // Dấu ngoặc
            if (eq[i] == '(') {
                myStack.push(eq[i]);
            } else { // eq[i] == ')'
                while (!myStack.empty() && myStack.top() != '(') {
                    retVal[j++] = myStack.top();
                    myStack.pop();
                }
                myStack.pop(); // Bỏ dấu '(' khỏi stack
            }
        }
    }

    // Lấy hết các toán tử còn lại trong stack
    while (!myStack.empty()) {
        retVal[j++] = myStack.top();
        myStack.pop();
    }

    // Gán ký tự kết thúc chuỗi
    retVal[j] = '\0';

    cout << eq << " sang Hauto: " << retVal << endl;
    delete[] retVal;
}

// Test code
int main() {
    char ep[250];
    fgets(ep, sizeof(ep), stdin);
    ep[strcspn(ep, "\r\n")] = 0;
    chuyenSangHauTo(ep);
    return 0;
}
