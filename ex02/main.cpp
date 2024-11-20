/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:00 by lucia             #+#    #+#             */
/*   Updated: 2024/11/20 18:34:29 by luciama2         ###   ########.fr       */
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
	// std::cout << "Check that Animal class is anstract, cannot be instantiable" << std::endl;
	// Animal animal("mammal"); //this shouls not compile
	
	
	for (int i = 0; i < (size * 2); i++)
		delete animals[i];

	return (0);
}