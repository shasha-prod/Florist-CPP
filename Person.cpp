#include "Person.h"
#include "FlowersBouquet.h"
#include <iostream>
#include "Florist.h"

Person::Person( const std::string& name)
   :name_(name){

   }

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers){
    std::cout << name_ << " orders flowers to " << recipient->getName() << " from Florist " << florist->getName()<< " : " << "." <<  std::endl;
    florist->acceptOrder(recipient,flowers);
}
void Person::acceptFlowers(const FlowersBouquet* bouquet){
    std::cout << name_ << " accepts the flowers: " << bouquet->getFlowerString() << "."<< std::endl;
}
std::string Person::getName() const {
    return name_;
}
