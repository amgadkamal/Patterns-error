#ifndef Sausage_h
#define Sausage_h

#include "ToppingDecorator.h"

class Sausage : public ToppingDecorator {
public:
	Sausage(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return 1.2 + tempPizza->getPrice(); };
	std::string getDescription() {
		return tempPizza->getDescription() + ",Sausage";
	};
	~Sausage() {};
};




#endif