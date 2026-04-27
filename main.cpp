#include <iostream>
#include "DeliveryPerson.h"
#include "Person.h"
#include "Gardener.h"
#include "Grower.h"
#include "FlowerArranger.h"
#include "Florist.h"
#include "Wholesaler.h"
#include <string>
#include <vector>


int main() {
Person* chris = new Person("Chris");
Person* robin = new Person("Robin");
Gardener* gardener = new Gardener("Garett");
Grower* grower = new Grower("Gray", gardener);
Wholesaler* wholesaler = new Wholesaler("Watson", grower);
FlowerArranger* arranger = new FlowerArranger("Flora");
DeliveryPerson* delivery = new DeliveryPerson("Dylan");
Florist* florist = new Florist("Fred", wholesaler, arranger, delivery);
std::vector<std::string> flowers = {
"Roses", "Violets", "Gladiolus"
};
chris->orderFlowers(florist, robin, flowers);

delete chris;
delete robin;
delete gardener;
delete grower;
delete wholesaler;
delete arranger;
delete delivery;
delete florist;

return 0;
}