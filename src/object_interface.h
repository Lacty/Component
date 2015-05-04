
#pragma once
#include "object.hpp"


class ObjectInterface {
protected:

  Object* obj;
  ObjectInterface(Object*);

public:

  virtual void show() {
    std::cout << "objectInterface" << std::endl;
  };
};