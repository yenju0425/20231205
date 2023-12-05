#include <iostream>
#include <vector>

using namespace std;

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    os << "{ ";
    for (const auto& element : vec) {
        os << element << " ";
    }
    os << "}";
    return os;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    cout << "Address of vec1: " << &vec1 << "; Address of internal buffer: " << vec1.data() << "; Content: " << vec1 << endl;
    cout << "Address of vec2: " << &vec2 << "; Address of internal buffer: " << vec2.data() << "; Content: " << vec2 << endl;

    vec1 = move(vec2);

    cout << "Address of vec1: " << &vec1 << "; Address of internal buffer: " << vec1.data() << "; Content: " << vec1 << endl;
    cout << "Address of vec2: " << &vec2 << "; Address of internal buffer: " << vec2.data() << "; Content: " << vec2 << endl;

    return 0;
}
