#include <iostream>

using namespace std;

int main () {
    int num = 100;

    // example 1
    int& single_and = num; // single &: lvalue reference (&)
    cout << "1. " << &num << " " << num << " " << &single_and << " " << single_and << endl;

    // example 2
    single_and = ++num; // ++num is a lvalue
    cout << "2. " << &num << " " << num << " " << &single_and << " " << single_and << endl;

    // example 3
    single_and++;
    cout << "3. " << &num << " " << num << " " << &single_and << " " << single_and << endl;

    // example 4
    int&& double_and = 10; // double &: rvalue reference (&&)
    cout << "4. " << &num << " " << num << " " << &double_and << " " << double_and << endl;

    // example 5
    double_and = double_and + 1;
    cout << "5. " << &num << " " << num << " " << &double_and << " " << double_and << endl;

    // example 6
    double_and = num + 1;
    cout << "6. " << &num << " " << num << " " << &double_and << " " << double_and << endl;

    // example 7
    num = 100;
    double_and = num++; // num++ is a rvalue
    cout << "7. " << &num << " " << num << " " << &double_and << " " << double_and << endl;

    // example 8
    double_and++;
    cout << "8. " << &num << " " << num << " " << &double_and << " " << double_and << endl;

    return 0;
}
