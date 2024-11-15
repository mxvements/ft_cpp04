/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:57 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 17:28:38 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

Animal::Animal(void)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	this->_type = src._type;
	return (*this);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType(void) const
{
	return (_type);
}

std::string Animal::getClassName(void) const
{
	return ("Animal");
}

void Animal::makeSound(void) const
{
	std::cout << "(meta sound)" << std::endl;
}