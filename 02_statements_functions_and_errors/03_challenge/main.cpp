// C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。`exponent` のデフォルト値は2で、`power` は `base` を `exponent` 回累乗した結果を返します。baseを3、exponentを4としてこの関数を呼び出してください。
#include <iostream>

double power(double base, double exponent=2){
  double ret = 1;

  for (int i{1}; i<=exponent; i++){
    ret *= base;
  }
  return ret;
}

int main(){
  std::cout << power(3, 4) << std::endl;
}
