#pragma once

#include <string>
#include <vector>
#include "FlowerArranger.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "Person.h"


class Florist  : public Person{
public:
  Florist( std::string name, Wholesaler* wholesaler, FlowerArranger* flowerarranger, DeliveryPerson* delivery);
  void acceptOrder(Person* recipient, std::vector<std::string> flowers);
private:
  DeliveryPerson* delivery_;
  Wholesaler* wholesaler_;
  FlowerArranger* flower_arranger_;
};