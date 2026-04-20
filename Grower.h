#pragma once

#include <string>
#include <vector>
#include "Gardener.h"
#include "Person.h"
class FlowersBouquet;

class Grower : public Person{
public:
  Grower(const std::string name, Gardener* gardener);
  FlowersBouquet* prepareOrder(std::vector<std::string> flowers);

private:
  Gardener* gardener_;
};