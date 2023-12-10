//ユーザーに数値の入力を求め、その値が正、負、ゼロのどれであるかを表示するプログラムを作成してください。

#include <iostream>

int main(){
  double inValue;
  std::cout << "input a number: " << std::endl;
  std::cin >> inValue;

  if (inValue > 0){
    std::cout << inValue << " is positive." << std::endl;
  }
  else if (inValue < 0){
    std::cout << inValue << " is negative." << std::endl;
  }
  else if (inValue == 0){
    std::cout << inValue << " is zero." << std::endl;
  }

  return 0;
}
