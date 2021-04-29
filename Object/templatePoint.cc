/*************************************************************************************
 * Description  : 模板类
 * Version      : 1.0
 * Author       : koritafei(koritafei@gmail.com)
 * Date         : 2021-04-29 21:15:43
 * LastEditors  : koritafei(koritafei@gmail.com)
 * LastEditTime : 2021-04-29 21:22:47
 * FilePath     : /CppObject/Object/templatePoint.cc
 * Copyright (C) 2021 koritafei(koritafei@gmail.com). All rights reserved.
 *************************************************************************************/

#include <iostream>

template <typename Type>
class Point {
public:
  enum Status { unallocated, normalized };
  Point(Type x = 0.0, Type y = 0.0, Type z = 0.0);
  ~Point() {
  }

  void *operator new(size_t);
  void  operator delete(void *, size_t);

private:
  static Point<Type> *freeList;
  static int          chunkSize;
  Type                _x, _y, _z;
};

int main(int argc, char **argv) {
}
