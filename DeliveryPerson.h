#pragma once

#include <string>
#include <vector>
#include "Person.h"

class FlowersBouquet;
class DeliveryPerson : public Person{
    public:
        DeliveryPerson( const std::string& name);
        void deliver( Person* recipient, FlowersBouquet* bouquet);
};