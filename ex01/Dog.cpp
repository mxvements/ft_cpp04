/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:11 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 18:20:47 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)
{
	std::cout << LBLUE << this->getClassName() << ": Destructor called" << RESET << std::endl;
}

Dog::Dog(void): Animal(Dog::getClassName())
{
	std::cout << LBLUE << this->getClassName() << ": Constructor called" << RESET << std::endl;
	this->_type = Dog::getClassName();
}

Dog::Dog(const Dog &src): Animal(Dog::getClassName())
{
	std::cout << LBLUE << this->getClassName() << ": Copy constructor called" << RESET << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << LBLUE << this->getClassName() << ": Assigner overload called" << RESET << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string Dog::getClassName(void) const
{
	return ("Dog");
}
void Dog::makeSound(void) const
{
	std::cout << "bark!" << std::endl;
}