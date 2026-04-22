#pragma once
#include "Person.h"
#include "FlowersBouquet.h"

#include <string>
#include <vector>

class FlowersBouquet;

class Gardener: public Person {
public:
  Gardener(const std::string name);
  FlowersBouquet* prepareBouquet( std::vector<std::string> flowers);
};