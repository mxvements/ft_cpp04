/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 23:15:38 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int size = 5;
	Animal *animals[2 * size];
	
	for (int i = 0; i < size; i++)
	{
		animals[i] = new Dog();
		animals[i + size] = new Cat();			
	}

	std::cout << std::endl;
	std::cout << "Check random ideas of random animals" << std::endl;
	
	std::cout << "animal type: " << animals[4]->getType()
			<<"\tanimal's brain: " << animals[4]->getBrain()
			<< "\tanimal's random idea: "<< animals[4]->getBrain()->getIdeas()[23] << std::endl;


	std::cout << std::endl;
	std::cout << "Testing copies of animals are not shallow" << std::endl;
	/**
	 * shallow copy
	 * just copies the addresss, so both pointers point to the same object
	 * 
	 * deep copy
	 * involves creating a new object that is a copy of the original object's content
	 */
	Animal *animal_cp = new Animal(*animals[7]); 
	std::cout << "src animal ptr:\t"<< animals[7] << std::endl;
	std::cout << "cp animal ptr:\t" << animal_cp << std::endl;
	std::cout << std::endl;
	std::cout << "src animal brain ptr:\t" << animals[7]->getBrain() << std::endl;
	std::cout << "cp animal brain ptr:\t" << animal_cp->getBrain() << std::endl;
	std::cout << std::endl;
	std::cout << "animal type: " << animal_cp->getType()
			<<"\tanimal's brain: " << animal_cp->getBrain()
			<< "\tanimal's random idea: "<< animal_cp->getBrain()->getIdeas()[23] 
			<< std::endl;	

	std::cout << std::endl;

	delete animal_cp;
	for (int i = 0; i < (size * 2); i++)
		delete animals[i];

	return (0);
}