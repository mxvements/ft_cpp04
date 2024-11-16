/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 20:08:32 by luciama2         ###   ########.fr       */
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
	for (int i = 0; i < (size * 2); i++) 
		delete animals[i];

	/** Check deep copyin of Brain */
	Brain *b1 = new Brain();
	std::string ideas[100];
	for (int i = 0; i < 100; i++){
		ideas[i] = "all animals are beautiful";
	}
	b1->setIdeas(ideas);
	for (int i = 0; i < 100; i++){
		ideas[i] = "all animals are awesome";
	}
	Brain *b2 = new Brain();
	b2->setIdeas(ideas);
	std::cout << "checking deep copy of brain:" << std::endl;
	std::cout << "b1 address:\t" << b1 << "\trandom idea:\t" << b1->getIdeas()[0] << std::endl;
	std::cout << "b2 address:\t" << b2 << "\trandom idea:\t" << b2->getIdeas()[0] << std::endl;
	delete b1;
	delete b2;

	return (0);
}