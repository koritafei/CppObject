/**
 * @file virtualfunction.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief 测试虚函数，虚函数表
 * @version 0.1
 * @date 2021-02-24
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

class Base {
public:
  virtual void f() {
    std::cout << "call f()" << std::endl;
  }

  virtual void g() {
    std::cout << "call g()" << std::endl;
  }

  virtual void h() {
    std::cout << "call h()" << std::endl;
  }
};

int main(int argc, char **argv) {
  Base b;

  std::cout << "virtual table address：" << (int *)(&b) << std::endl;
  std::cout << "vtbl first function address：" << (int *)*(int *)(&b) + 0
            << std::endl;
  std::cout << "vtbl second function address：" << (int *)*(int *)(&b) + 1
            << std::endl;
  std::cout << "vtbl third function address：" << (int *)*(int *)(&b) + 2
            << std::endl;
}
