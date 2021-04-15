/**
 * @file abstractclass.cc
 * @author koritafei (koritafei@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-04-09
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

class Abstract_class {
public:
  virtual ~Abstract_class()             = 0;
  virtual void        interface() const = 0;
  const char *mumble() const {
    return _mumable;
  }

protected:
  Abstract_class(char *pc = 0);

private:
  char *_mumable;
};
