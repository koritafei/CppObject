/**
 * @file function.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief 验证类的函数是否公用
 * @version 0.1
 * @date 2021-02-24
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

class Point3D {
public:
  Point3D(float x, float y, float z) : _x(x), _y(y), _z(z) {
  }

  // non-inline function 所有 class object 公用
  void point3d_print() {
    union {
      void *pv;
      void (Point3D::*pfn)();
    } u;
    u.pfn = &Point3D::point3d_print;
    std::cout << "point3d_print address " << (int *)u.pv << std::endl;
    std::cout << _x << " , " << _y << " , " << _z << std::endl;
  }

  // inline function 属于每个 class object
  inline void point3d_print_i() {
    union {
      void *pv;
      void (Point3D::*pfn)();
    } u;
    u.pfn = &Point3D::point3d_print_i;
    std::cout << "point3d_print_i address " << (int *)u.pv << std::endl;
    std::cout << _x << " , " << _y << " , " << _z << std::endl;
  }

private:
  // data member 属于每个class object
  float _x;
  float _y;
  float _z;
};

int main(int argc, char **argv) {
  Point3D *point1 = new Point3D(1, 2, 3);
  Point3D *point2 = new Point3D(3, 4, 5);
  union {
    void *pv;
    void (Point3D::*pfn)();
  } u;
  u.pfn = &Point3D::point3d_print;
  std::cout << "non-inline function address " << u.pv << std::endl;
  u.pfn = &Point3D::point3d_print_i;
  std::cout << "inline function address " << u.pv << " , point 1 address "
            << point1 << " , point 2 address " << point2 << std::endl;

  point1->point3d_print();
  point1->point3d_print_i();
  point2->point3d_print();
  point2->point3d_print_i();
}
