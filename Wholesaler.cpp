#include "Wholesaler.h"
#include "Person.h"
#include <iostream>

Wholesaler::Wholesaler(const std::string& name, Grower* grower)
:Person(name), grower_(grower){

}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers){
    std::cout << "Wholesaler " << this->getName() << " forwards the request to Grower "<< grower_->getName()<< "." << std::endl;
    FlowersBouquet* bouq =  grower_->prepareOrder(flowers);
    std::cout << "Grower " << grower_->getName() << " returns flowers to Wholesaler "<< this->getName()<< "." << std::endl;
    return bouq;
}
