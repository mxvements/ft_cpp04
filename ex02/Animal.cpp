/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:57 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 23:28:41 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	delete this->_brain;
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

Animal::Animal(void)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type), _brain(new Brain())
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
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void Animal::setBrain(Brain *brain)
{
	this->_brain = brain;
}

std::string Animal::getType(void) const
{
	return (_type);
}

Brain *Animal::getBrain(void) const
{
	return (_brain);
}

std::string Animal::getClassName(void) const
{
	return ("Animal");
}
