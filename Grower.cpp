#include "Grower.h"
#include "FlowersBouquet.h"
#include "Gardener.h"
#include "Person.h"

#include <iostream>

  Grower::Grower(const std::string name, Gardener* gardener):Person(name), gardener_(gardener){}

  FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers){
    std::cout << "Grower " << this->getName() << " forwards the request to Gardener "<< gardener_->getName() << "." << std::endl;

    std::cout << "Gardener " << gardener_->getName() << " returns flowers to Grower "<< this->getName() << "." << std::endl;
    return  gardener_->prepareBouquet(flowers);
  };

