/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:11 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:42:18 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

Dog::Dog(void): Animal("Dog")
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << this->getClassName() << ": Assigner overload called" << std::endl;
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