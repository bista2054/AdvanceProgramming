#include <iostream>
using namespace std;

class Adder {
    int x;
public:
    Adder(int x) : x(x) {}
    int operator()(int y) { return x + y; }
};

Adder outerFunction(int x) {
    return Adder(x);
}

int main() {
    Adder closure = outerFunction(10);
    int result = closure(5); // Returns 15
    cout << result << endl;

    int value = 10;
    // value = "Hello"; // Error
    return 0;
}