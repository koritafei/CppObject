/**
 * @file point3d.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-02-22
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <time.h>

#include <cstdio>

#define point3d_print_d(pd)                                                    \
  do {                                                                         \
    printf("(%g %g %g)\n", pd.x, pd.y, pd.z);                                  \
  } while (0)

typedef struct point3d {
  float x;
  float y;
  float z;
} point3d;

void point3d_print(point3d *pd) {
  printf("(%g %g %g)\n", pd->x, pd->y, pd->z);
}

class Point3D {
public:
private:
  float x;
  float y;
  float z;
};

int main(int argc, char **argv) {
  point3d pd;
  pd.x = 1.0f;
  pd.y = 2.0f;
  pd.z = 3.0f;
  clock_t start, end;
  start = clock();
  point3d_print(&pd);
  end = clock();
  printf("Function use %f\n", (double)(end - start) / CLOCKS_PER_SEC);
  start = clock();
  point3d_print_d(pd);
  end = clock();
  printf("define use %f\n", (double)(end - start) / CLOCKS_PER_SEC);
}
