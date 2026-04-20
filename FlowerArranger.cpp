#include "FlowerArranger.h"
#include "Wholesaler.h"
#include "Person.h"
#include <iostream>
#include "FlowersBouquet.h"

FlowerArranger::FlowerArranger(const std::string& name):Person(name){}

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouq){
    std::cout << "Flower Arranger " << this->getName() << " arranges flowers."<< std::endl;
    bouq->arrange();
}
