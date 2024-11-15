/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 18:57:18 by luciama2         ###   ########.fr       */
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
	const Animal *random_animal = animals[2];
	std::cout << "animal type: " << random_animal->getType() << std::endl
			  << "animal's type from animal class: " << random_animal->Animal::getType() << std::endl
			  << "\tanimal's brain: " << random_animal->getBrain() << std::endl
			  << "\tanimal's random idea: " << random_animal->getBrain()->getIdeas()[23] << std::endl;
	std::cout << std::endl;
	/**
	 * shallow copy
	 * just copies the addresss, so both pointers point to the same object
	 *
	 * deep copy
	 * involves creating a new object that is a copy of the original object's content
	 */
	std::cout << "Testing copies of animals are not shallow" << std::endl;
	Animal *animal_src = animals[7];
	Animal *animal_cp = new Animal(*animal_src);
	std::cout << "src animal ptr:\t" << animal_src << std::endl;
	std::cout << "cp animal ptr:\t" << animal_cp << std::endl;
	std::cout << std::endl;
	std::cout << "src animal brain ptr:\t" << animal_src->getBrain() << std::endl;
	std::cout << "cp animal brain ptr:\t" << animal_cp->getBrain() << std::endl;
	std::cout << std::endl;
	std::cout << "animal type: " << animal_cp->getType() << std::endl
			  << "\tanimal's brain: " << animal_cp->getBrain() << std::endl
			  << "\tanimal's random idea: " << animal_cp->getBrain()->getIdeas()[62] << std::endl
			  << std::endl;

	std::cout << std::endl;

	delete animal_cp;
	for (int i = 0; i < (size * 2); i++)
		delete animals[i];

	return (0);
}