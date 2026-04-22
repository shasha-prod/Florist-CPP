#include "DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson( const std::string& name): Person(name){}
void DeliveryPerson::deliver( Person* recipient, FlowersBouquet* bouquet){
    std::cout << "Delivery Person " << this->getName() << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(bouquet);
}