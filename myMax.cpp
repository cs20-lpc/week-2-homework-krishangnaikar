#include <iostream>
using namespace std;

// TODO: Write a function template myMax
template <typename T>
T myMax(T num1, T num2) {
    return (num1>num2) ? num1: num2;
}

int main() {
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
}
