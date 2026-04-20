#pragma once

#include <string>
#include <vector>
#include "Person.h"

class FlowersBouquet;

class FlowerArranger: public Person {
public:
  FlowerArranger(const std::string& name);
  void arrangeFlowers(FlowersBouquet* bouq);
};