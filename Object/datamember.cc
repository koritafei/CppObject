/**
 * @file datamember.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief pointer to data member
 * @version 0.1
 * @date 2021-03-23
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <cstdio>
#include <iostream>

class Point3d {
public:
  virtual ~Point3d() {
  }

  void getOffset() const {
    std::cout << "x = " << Point3d::x << "\ny = " << Point3d::y
              << "\nz = " << Point3d::z << std::endl;
    printf("&Point3d::x = %p\n", &Point3d::x);
    printf("&Point3d::y = %p\n", &Point3d::y);
    printf("&Point3d::z = %p\n", &Point3d::z);

    int Point3d::*p1 = 0;
    int Point3d::*p2 = &Point3d::x;

    if (p1 == p2) {
      std::cout << "p1 & p2 contain the same value --" << std::endl;
      std::cout << "they must address the same member!" << std::endl;
    }
  }

  static void staticPrint() {
    printf("&Point3d::origin   = %p\n", &origin);
    printf("&Point3d::origin x = %p, origin+1 = %p\n", &origin.x, &origin + 1);
    printf("&Point3d::origin y = %p, origin+2 = %p\n", &origin.y, &origin + 2);
    printf("&Point3d::origin z = %p, origin+3 = %p\n", &origin.z, &origin + 3);
    printf("&Point3d::origin x = %p, origin-1 = %p\n", &origin.x, &origin - 1);
    printf("&Point3d::origin y = %p, origin-2 = %p\n", &origin.y, &origin - 2);
    printf("&Point3d::origin z = %p, origin-3 = %p\n", &origin.z, &origin - 3);
  }

protected:
  int            x, y, z;
  static Point3d origin;
};

Point3d Point3d::origin = Point3d();

int main(int argc, char **argv) {
  Point3d point3d;
  point3d.getOffset();
  Point3d::staticPrint();
}
