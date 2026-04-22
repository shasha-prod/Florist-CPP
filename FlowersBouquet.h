#pragma once

#include <string>
#include <vector>

class FlowersBouquet{
    public:
        FlowersBouquet( const std::vector<std::string> bouquet , bool is_arranged);
        void arrange();
        std::string getBouquetString() const;
        bool isReady() const;

    private:
       std::vector<std::string> bouquet_;
       bool is_arranged_;
};