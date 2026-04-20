#pragma once

#include <string>
#include <vector>

class Florist;
class FlowersBouquet;

class Person{
    public:
        Person( const std::string& name);
        void orderFlowers( Florist* florist, Person* recipient, std::vector<std::string> flowers);
        void acceptFlowers(const FlowersBouquet* bouquet);
        std::string getName() const;

    private:
       std::string name_ ;
};