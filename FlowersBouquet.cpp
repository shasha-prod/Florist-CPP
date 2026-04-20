#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet( const std::vector<std::string> bouquet, bool is_arranged)
: bouquet_(bouquet), is_arranged_(is_arranged){

}
void FlowersBouquet::arrange() {
    is_arranged_=true;
}
std::string FlowersBouquet::getFlowerString() const{
    std::string list_of_flowers;
    for (const std::string& flower : bouquet_) {
        list_of_flowers = flower +", " + list_of_flowers;
    }
    return list_of_flowers;
}
bool FlowersBouquet::isReady() const{
    return is_arranged_==true;
}