#include <iostream>
#include <stdexcept>
#include <vector>

int element_at(const std::vector<int>& numbers, int index){
    if((index < 0) || (index >= numbers.size())) {
        throw std::out_of_range("index is out of range");
    }
    return numbers[index];
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    int result;

    try {
        result = element_at(numbers, 4);
        std::cout << result << std::endl;

        result = element_at(numbers, 5);
        std::cout << result << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
