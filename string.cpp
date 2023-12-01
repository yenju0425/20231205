#include <iostream>

using namespace std;

int main() {
    string str1 = "Hello World!";
    string str2 = "I'm a very long string that is not even funny!";

    cout << "Address of str1: " << &str1 << "; Address of internal buffer: " << static_cast<const void*>(str1.data()) << "; Content: " << str1 << endl;
    cout << "Address of str2: " << &str2 << "; Address of internal buffer: " << static_cast<const void*>(str2.data()) << "; Content: " << str2 << endl;

    str1 = move(str2);

    cout << "Address of str1: " << &str1 << "; Address of internal buffer: " << static_cast<const void*>(str1.data()) << "; Content: " << str1 << endl;
    cout << "Address of str2: " << &str2 << "; Address of internal buffer: " << static_cast<const void*>(str2.data()) << "; Content: " << str2 << endl;

    // move with short string optimization (SSO)
    string str3 = "Rick";
    string str4 = "Yellow";

    cout << "Address of str3: " << &str3 << "; Address of internal buffer: " << static_cast<const void*>(str3.data()) << "; Content: " << str3 << endl;
    cout << "Address of str4: " << &str4 << "; Address of internal buffer: " << static_cast<const void*>(str4.data()) << "; Content: " << str4 << endl;

    str3 = move(str4);

    cout << "Address of str3: " << &str3 << "; Address of internal buffer: " << static_cast<const void*>(str3.data()) << "; Content: " << str3 << endl;
    cout << "Address of str4: " << &str4 << "; Address of internal buffer: " << static_cast<const void*>(str4.data()) << "; Content: " << str4 << endl;

    return 0;
}
