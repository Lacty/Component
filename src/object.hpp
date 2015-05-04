
#pragma once
#include <iostream>


class Object {
public:

  Object() = default;

  virtual void show() {
    std::cout << "Object" << std::endl;
  }
};