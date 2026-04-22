#include "Person.h"
#include "FlowersBouquet.h"
#include <iostream>
#include "Florist.h"

Person::Person(const std::string &name)
    : name_(name)
{
}
std::string Person::flowersToString(std::vector<std::string> flowers)
{
    if (flowers.size() == 0)
    {
        throw std::runtime_error("There are no flowers given.");
    }
    std::string flower_string;
    for (const std::string & flower : flowers)
    {
        flower_string = flower_string + ", " + flower;
    }
    flower_string = flower_string.substr(2);
    return flower_string;
}
void Person::orderFlowers(Florist *florist, Person *recipient, std::vector<std::string> flowers)
{
    std::cout << name_ << " orders flowers to " << recipient->getName() << " from Florist " << florist->getName() << ": " 
    << this->flowersToString(flowers) << "." << std::endl;
    florist->acceptOrder(recipient, flowers);
}
void Person::acceptFlowers(FlowersBouquet *bouquet)
{
    std::cout << name_ << " accepts the flowers: " << bouquet->getBouquetString() << "." << std::endl;
    delete bouquet;
}
std::string Person::getName() const
{
    return name_;
}
