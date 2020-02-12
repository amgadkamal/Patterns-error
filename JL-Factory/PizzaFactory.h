#ifndef PizzaFactory_h
#define PizzaFactory_h


#include "Pizza.h"
#include "ThinCrustPizza.h"
#include "ThickCrustPizza.h"
#include "StuffedCrustPizza.h"
#include "Caramel.h"
#include"Mushrooms.h"
#include"Onion.h"
#include"Redsauce.h"
#include"Sausage.h"

class PizzaFactory {

public:
	enum PizzaType {
		ThinCrust,
		ThickCrust,
		StuffedCrust,


	};

	enum DecoratorType {

		caramel,
		mushrooms,
		onions,
		redsauce,
		sausage

	};


	static Pizza* createPizza(PizzaType pizzaType) {


		switch (pizzaType) {
		case ThinCrust:
			return new ThinCrustPizza();

		case ThickCrust:
			return new ThickCrustPizza();

		case StuffedCrust:
			return new StuffedCrustPizza();

		}
		throw "Invalid Pizza type";
	}
   
    static ToppingDecorator*createPizzaa(DecoratorType dType)
	{

		switch (dType) {
	     	case caramel:
				return new Redsauce();
		
		}

		switch (dType) {
		case mushrooms:
			return new Mushrooms();

		}

		switch (dType) {
		case onions:
			return new Onion();

		}

		switch (dType) {
		case redsauce:
			return new Redsauce();

		}


		switch (dType) {
		case sausage:
			return new Sausage();

		}
		throw "Invalid Pizza type";
	}

	
  };
};



#endif