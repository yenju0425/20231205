#include <iostream>

using namespace std;

// Using function overloading to check if a variable is an lvalue or rvalue is NOT a good practice!

void print_num(int& num) {
    cout << "lvalue: " << num << endl;
}

void print_num(int&& num) {
    cout << "rvalue: " << num << endl;
}

void print_str(string& str) {
    cout << "lvalue: " << str << endl;
}

void print_str(string&& str) {
    cout << "rvalue: " << str << endl;
}

int main() {
    int num = 10;
    string str = "Rick";

    print_num(num);
    print_num(100);
    print_num(100 + 100);
    print_num(num + 100);
    print_num(move(num));
    print_num(num++);
    print_num(++num);

    print_str(str);
    print_str("Yellow");
    print_str(string("Yellow"));
    print_str(move("Yellow"));
    print_str(str + " " + "Yellow");

    // Actually, string literals are lvalues.
    cout << &("Yellow") << endl;
    // cout << &(string("Yellow")) << endl; // error: string("Yellow") is a rvalue.

    return 0;
}
