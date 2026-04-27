#include "Florist.h"
#include "Person.h"

#include <iostream>
#include "DeliveryPerson.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "FlowersBouquet.h"



  Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerarranger, DeliveryPerson* delivery)
  : Person(name), delivery_(delivery), wholesaler_(wholesaler), flower_arranger_(flowerarranger){}

  
  void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers){
        std::cout << "Florist " << this->getName() << " forwards request to Wholesaler "<< wholesaler_->getName()<< "." <<  std::endl;
        FlowersBouquet* bouq = wholesaler_->acceptOrder(flowers);
        std::cout << "Wholesaler " << wholesaler_->getName() << " returns flowers to Florist "<< this->getName()<< "." <<  std::endl;
        std::cout << "Florist " << this->getName() << " request flowers arrangement from Flower Arranger "<< flower_arranger_->getName()<< "." <<  std::endl;
        flower_arranger_->arrangeFlowers(bouq);
        if(bouq->isReady()){
            std::cout << "Flower Arranger " << flower_arranger_->getName() << " returns arranged flowers to Florist "<< this->getName()<< "." <<  std::endl;
            std::cout << "Florist " << this->getName() << " forwards flowers to Delivery Person "<< delivery_->getName() << "." << std::endl;
            delivery_->deliver(recipient,bouq);
        }
        else{
          std::cout << "The bouquet isnt ready to be delivered! "<< std::endl;
        }
  }