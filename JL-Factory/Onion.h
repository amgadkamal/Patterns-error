#ifndef Onion_h
#define Onion_h
#include "Pizza.h"

#include "ToppingDecorator.h"

class Onion : public ToppingDecorator {
public:
	Onion(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return .6 + tempPizza->getPrice(); };
	std::string getDescription() {
		return tempPizza->getDescription() + ",Adding Onion";
	};
	~Onion() {};
};







#endif
