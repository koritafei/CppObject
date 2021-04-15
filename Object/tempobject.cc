/**
 * @file tempobject.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief 临时对象，返回refecnce or value
 * @version 0.1
 * @date 2021-04-05
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

class Complex {
public:
  Complex(double real, double imp) : _real(real), _imp(imp) {
  }

private:
  double _real;
  double _imp;
};

double &result(double x, double y) {
  double sum = 0.0;
  sum        = x + y;
  return sum;
}

double result_2(double x, double y) {
  return x + y;
}

int main(int argc, char **argv) {
  double x = 1.0, y = 2.0;
  std::cout << result(x, y) << std::endl;
  std::cout << result_2(x, y) << std::endl;
}
