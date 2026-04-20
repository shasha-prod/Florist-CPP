#include "Gardener.h"
#include "Person.h"
#include <iostream>

Gardener::Gardener( const std::string name)
   :Person(name){}

FlowersBouquet* Gardener::prepareBouquet(const std::vector<std::string>& flowers){
    std::cout << "Gardener "<< this->getName() << " prepares flowers." << std::endl;
    FlowersBouquet* bouq = new FlowersBouquet(flowers, false);
    return bouq;
}


