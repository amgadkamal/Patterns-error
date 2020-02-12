#include <iostream>
#include"PizzaFactory.h"
void pizzaInformation(PizzaFactory::PizzaType pizzaType, PizzaFactory::DecoratorType dtype) 
	{
	    

	    Pizza* pizza;
		
			pizza = (PizzaFactory::createPizza(pizzaType),PizzaFactory::createPizzaa(dtype);
		
		std::cout << "Price of" << pizzaType << "is" << pizza->getPrice() << std::endl;
		std::cout << "Pizza includes " << pizza->getDescription() << std::endl;
		delete pizza;
	}

	int main(int argc, const char* argv[]) {
		pizzaInformation(PizzaFactory::ThinCrust,PizzaFactory::caramel);
		pizzaInformation(PizzaFactory::ThickCrust,PizzaFactory::mushrooms);
		pizzaInformation(PizzaFactory::StuffedCrust,PizzaFactory::sausage);

		return 0;


	}
