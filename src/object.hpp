
#pragma once
#include <iostream>


class Object {
public:

  virtual void show() {
    std::cout << "Object" << std::endl;
  }
};