#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    Box(T val) {
        this->value = val;
    }

    void setValue(T val) {
        this->value = val;
    }

    T getValue() {
        return this->value;
    }

    void print() {
        cout << this->value << endl;
    }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}
