#include <iostream>
#include "math_operations.h"

int main()
{
  float num1;
  float num2;
  float result = 0;
  char operation;

  std::cout << "Enter a calculation: ";
  std::cin >> num1 >> operation >> num2;

  if (operation == '+'){
    result = MathOps::addition(num1, num2);
  }
  else if (operation == '-'){
    result = MathOps::subtraction(num1, num2);
  }
  else if (operation == '*'){
    result = MathOps::multiplication(num1, num2);
  }
  else if (operation == '/'){
    try {
      result = MathOps::division(num1, num2);
    } catch (const std::runtime_error& e) {
      std::cerr << e.what() << std::endl;
      return -1;
    }
  }
  else{
    std::cout << "Error. Invalid input." << std::endl;
    return -1;
  }

  std::cout << "Result: " << result << std::endl;

  return 0;
}
