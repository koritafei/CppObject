/**
 * @file funcpointer.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief 函数指针
 * @version 0.1
 * @date 2021-04-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

class Pointer {
public:
  Pointer(double x,double y):_x(x),_y(y){}
  virtual void print() {
    std::cout << _x << '\t' << _y << '\n';
  }
protected:
  double _x;
  double _y;
};

class Pointer3D : public Pointer {
public:
  Pointer3D(double x,double y, double z):Pointer(x,y),_z(z){}

  void print () override {
    std::cout << _x << '\t' << _y << '\t' << _z << '\n';
  }
private:
  double _z;
};


int main(int argc, char **argv) {
  void (Pointer:: *print)() = &Pointer::print;
  Pointer *p1 = new Pointer(1.2, 3.4);
  (p1->*print)();
  Pointer *p2 = new Pointer3D(1.2, 3.4, 5.6);
  (p2->*print)();
}