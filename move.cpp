#include <iostream>
#include <chrono>

using namespace std;

int main() {
    // Part 1: Move and Copy Short String
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        string str = "Short String";
        string tmp = move(str);
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Move Short String: " << duration.count() << "ms" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        string str = "Short String";
        string tmp = str;
    }
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Copy Short String: " << duration.count() << "ms" << endl;

    // Part 2: Move and Copy Long String
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        string str = "A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny!";
        string tmp = move(str);
    }
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Move Long String: " << duration.count() << "ms" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        string str = "A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny! A stupidly long string that is not even funny!";
        string tmp = str;
    }
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Copy Long String: " << duration.count() << "ms" << endl;

    // Part 3: Move and Copy Int
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        int num = 42;
        int tmp = move(num);
    }
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Move Int: " << duration.count() << "ms" << endl;

    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        int num = 42;
        int tmp = num;
    }
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Copy Int: " << duration.count() << "ms" << endl;

    return 0;
}
