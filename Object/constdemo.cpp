/**
 * @file constdemo.cpp
 * @author koritafei (koritafei@gmail.com)
 * @brief const 作用分析
 * @version 0.1
 * @date 2021-03-10
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

class A {
private:
  const int a;  // 常变量成员，只能通过初始化列表赋值
public:
  A() {
  }
  A(int a_) : a(a_) {  // 初始化列表
  }

  // const 可以用于区分重载函数
  int getValue() {  // 普通函数
    return a;
  }

  int getValue() const {  // 常成员函数不能修改任何类中任何变量的值
    return a;
  }
};

int main(int argc, char **argv) {
  // 对象
  A       a;  // 普通成员对象,可以调用所有的可见成员函数
  const A b;  // 常成员对象，只能调用常成员函数，更新常成员变量
  const A *p = &a;  // 常指针，指针保存的地址可以改变，但是指针指向的值不能改变
  const A &q = a;   // 常引用，只能指向当前常量，不能改变

  // 指针
  char        greeting[] = "Hello";
  char *      p1         = greeting;  // 指针变量，指向字符数组变量
  const char *p2 = greeting;  // 指针变量，指向字符串数组常量
  char *const p3 = greeting;  // 常指针，指向字符串数组变量
  const char *const p4 = greeting;  // 常指针，指向字符串数组的常量

  // 函数
  void function1(const int var); // 传递的参数在函数内不可变
  void function2(const char *var); // 参数指针指向内容为常量不可变
  void function3(char *const var); // 参数内容为常指针，内容变，地址不可变
  void function4(const int &var); // 引用参数在函数内为常量

  // 函数返回值
  const int function5(); // 返回一个常数
  const int *function6(); // 返回一个指向常量的指针变量，const int *p = function6();
  int const *function7(); // 返回一个指向变量的常指针， int *const p = function7();

}
