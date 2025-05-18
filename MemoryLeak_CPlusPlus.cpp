#include <iostream>

void manualMemory() {
    // Manual heap allocation
    int* x = new int(5);
    std::cout << "x = " << *x << std::endl;
    
    int* y = x;
    delete x;  //memory leaked is taken care
    
    std::unique_ptr<int> z(new int(10));
    std::cout << "z = " << *z << std::endl;
    
    // Memory leak if not deleted
    int* leak = new int(20);
}

int main() {
    manualMemory();
    return 0;
}
