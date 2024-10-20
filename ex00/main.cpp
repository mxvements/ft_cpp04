/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:42:48 by lucia            ###   ########.fr       */
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
	
	std::cout << first_dog->getType() << " " << std::endl;
	std::cout << first_cat->getType() << " " << std::endl;
	first_cat->makeSound();
	first_dog->makeSound();
	meta->makeSound();

	const WrongCat *wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
		
	return (0);
}