#ifndef ThickCrustPizza_h
#define ThickCrustPizza_h

#include "Pizza.h"
class ThickCrustPizza : public Pizza {
public:
	virtual float getPrice() { return 8.5; };
	virtual std::string getDescription() { return "Thin Crust"; };
	virtual ~ThickCrustPizza() {};
};
#endif // !ThickCrustPizza_h