/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 19:26:49 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *first_dog = new Dog();
	const Animal *first_cat = new Cat();
	
	// std::cout << meta->getType() << std::endl;
	// std::cout << first_dog->getType() << std::endl;
	// std::cout << first_cat->getType() << std::endl;
	// std::cout << std::endl;
	meta->makeSound();
	first_dog->makeSound();
	first_cat->makeSound();
	std::cout << std::endl;

	const WrongAnimal *wronganimal = new WrongCat();
	const WrongAnimal wronganimal_cp(*wronganimal);
	const WrongAnimal *wrongcat = new WrongCat();
	// std::cout << wronganimal->getType() << std::endl;
	// std::cout << wronganimal_cp.getType() << std::endl;
	// std::cout << wrongcat->getType() << std::endl;
	wronganimal->makeSound();
	wrongcat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete first_dog;
	delete first_cat;
	delete wronganimal;
	delete wrongcat;
		
	return (0);
}