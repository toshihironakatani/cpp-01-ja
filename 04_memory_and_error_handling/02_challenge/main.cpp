#include <iostream>

void swap_int(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    swap_int(&a, &b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
}
