#include <iostream>
#include <vector>

std::vector<int> double_elements(std::vector<int> numbers){
    std::vector<int> result;
    for (int n : numbers){
        result.push_back(n * 2);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> double_numbers = double_elements(numbers);

    std::cout << "original: ";
    for (int n: numbers){
      std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "new: ";
    for (int n: double_numbers) {
      std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
