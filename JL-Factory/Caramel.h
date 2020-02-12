#ifndef Caramel_h
#define Caramel_h


#include "ToppingDecorator.h"

class Caramel : public ToppingDecorator {
public:
	Caramel(Pizza* pizza) :ToppingDecorator(pizza) {};
	float getPrice() { return 1 + tempPizza->getPrice(); };
	std::string getDescription() {
		return tempPizza->getDescription() + ",Caramel";
	};
	virtual ~Caramel() {};
};




#endif
