#pragma once

#include <string>
#include <vector>
#include "Grower.h"
#include "Person.h"

class FlowersBouquet;

class Wholesaler : public Person{
public:
  Wholesaler(const std::string& name, Grower*& grower);
  FlowersBouquet* acceptOrder(std::vector<std::string> flowers);
private:
  Grower* grower_;
};