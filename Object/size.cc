/**
 * @file size.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief class 与 struct 中的对齐与补齐
 * @version 0.1
 * @date 2021-03-05
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

struct testA {};

struct testB {
  short a;
  int   b;
  short c;
};

struct testC {
  short a;
  short b;
  int   c;
};

struct testG {
  short a;
  short b;
  int   c;
  void  print() const {
    std::cout << "size" << std::endl;
  }
};

struct testD {
  testA a;
  int   b;
  testA c;
};

struct testF {
  testA a;
  int   b;
  testA c;

  void print() const {
    std::cout << "size" << std::endl;
  }
};

struct testE {
  testA a;
};

class clA {};

class clB {
public:
  short a;
  short c;
  int   b;
};

class clC {
public:
  short a;
  int   b;
  short c;
};
class clD {
public:
  short a;
  int   b;
  short c;
  void  print() const {
    std::cout << "size" << std::endl;
  }
};

class clE {
public:
  short        a;
  int          b;
  short        c;
  virtual void print() const {
    std::cout << "size" << std::endl;
  }
};

class clK {
public:
  short        a;
  int          b;
  short        c;
  virtual void print() const {
    std::cout << "size" << std::endl;
  }
};

class clF : public clE {
public:
  virtual void print() const {
    std::cout << "size" << std::endl;
  }
};

class clG {
public:
  clA          a;
  int          b;
  clA          c;
  virtual void print() const {
    std::cout << "size" << std::endl;
  }
};

class clH {
public:
  clA  a;
  void print() const {
    std::cout << "size" << std::endl;
  }
};

class clI {
public:
  clA          a;
  virtual void print() const {
    std::cout << "size" << std::endl;
  }
};

class clJ {
public:
  clA a;
};

int main() {
  testA a;
  testB b;
  testC c;
  testD d;
  testE e;
  testF f;
  testG g;

  clA ca;
  clB cb;
  clC cc;
  clD cd;
  clE ce;
  clF cf;
  clG cg;
  clH ch;
  clI ci;
  clJ cj;
  clK ck;

  std::cout << "TestA size = " << sizeof(testA) << ";  "
            << "TestB size = " << sizeof(testB) << ";  "
            << "TestC size = " << sizeof(testC) << ";  "
            << "TestG size = " << sizeof(testG) << ";  "
            << "TestD size = " << sizeof(testD) << ";  "
            << "TestF size = " << sizeof(testF) << ";  "
            << "TestE size = " << sizeof(testE) << ".\n";

  std::cout << "TestA size = " << sizeof(a) << ";  "
            << "TestB size = " << sizeof(b) << ";  "
            << "TestC size = " << sizeof(c) << ";  "
            << "TestG size = " << sizeof(g) << ";  "
            << "TestD size = " << sizeof(d) << ";  "
            << "TestF size = " << sizeof(f) << ";  "
            << "TestE size = " << sizeof(e) << ".\n";

  std::cout << "TestD size = " << sizeof(d) << ";\n"
            << "TestD Address = " << &d << ";\n"
            << "TestD a Address = " << &d.a << ";\n"
            << "TestD b Address = " << &d.b << ";\n"
            << "TestD c Address = " << &d.c << ".\n";

  std::cout << "ClassA size = " << sizeof(clA) << ";  "
            << "ClassB size = " << sizeof(clB) << ";  "
            << "ClassC size = " << sizeof(clC) << ";  "
            << "ClassD size = " << sizeof(clD) << ";  "
            << "ClassE size = " << sizeof(clE) << ";  "
            << "ClassF size = " << sizeof(clF) << ";  "
            << "ClassK size = " << sizeof(clK) << ";  "
            << "ClassG size = " << sizeof(clG) << ";  "
            << "ClassH size = " << sizeof(clH) << ";  "
            << "ClassI size = " << sizeof(clI) << ";  "
            << "ClassJ size = " << sizeof(clJ) << ".\n";

  std::cout << "ClassA size = " << sizeof(ca) << ";  "
            << "ClassB size = " << sizeof(cb) << ";  "
            << "ClassC size = " << sizeof(cc) << ";  "
            << "ClassD size = " << sizeof(cd) << ";  "
            << "ClassE size = " << sizeof(ce) << ";  "
            << "ClassF size = " << sizeof(cf) << ";  "
            << "ClassK size = " << sizeof(ck) << ";  "
            << "ClassG size = " << sizeof(cg) << ";  "
            << "ClassH size = " << sizeof(ch) << ";  "
            << "ClassI size = " << sizeof(ci) << ";  "
            << "ClassJ size = " << sizeof(cj) << ".\n";

  std::cout << "ClassG size = " << sizeof(clG) << ";\n"
            << "ClassG Address = " << &cg << ";\n"
            << "ClassG a Address = " << &cg.a << ";\n"
            << "ClassG b Address = " << &cg.b << ";\n"
            << "ClassG c Address = " << &cg.c << ".\n";

  std::cout << "int* size = " << sizeof(int *) << std::endl;
}
