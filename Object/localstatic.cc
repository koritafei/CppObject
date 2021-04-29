/*************************************************************************************
 * Description  : local static object
 * Version      : 1.0
 * Author       : koritafei(koritafei@gmail.com)
 * Date         : 2021-04-29 10:31:10
 * LastEditors  : koritafei(koritafei@gmail.com)
 * LastEditTime : 2021-04-29 10:37:57
 * FilePath     : /CppObject/Object/localstatic.cc
 * Copyright (C) 2021 koritafei(koritafei@gmail.com). All rights reserved.
 *************************************************************************************/

#include <iostream>

class LocalStatic {
public:
  static const LocalStatic& getInstance() {
    static LocalStatic instance;

    return instance;
  }

  ~LocalStatic() {
  }

private:
  LocalStatic() {
  }
};

int main(int argc, char** argv) {
  for (int i = 0; i < 1000; i++) {
    LocalStatic s = LocalStatic::getInstance();
    printf("LocalStatic Object = %p\n", &s);
  }
}
