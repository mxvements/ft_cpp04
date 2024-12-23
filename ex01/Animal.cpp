/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:57 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 19:47:25 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << YELLOW << this->getClassName() << ": Destructor called" << RESET << std::endl;
}

Animal::Animal(void)
{
	std::cout << YELLOW << this->getClassName() << ": Constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << YELLOW << this->getClassName() << ": Constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << YELLOW << this->getClassName() << ": Copy constructor called" << RESET << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << YELLOW << this->getClassName() << ": Assignment overload called" << RESET << std::endl;
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