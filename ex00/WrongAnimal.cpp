/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:23:30 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:24:06 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	this->_type = src._type;
	return (*this);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

std::string WrongAnimal::getClassName(void) const
{
	return ("WrongAnimal");
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "(wrong meta sound)" << std::endl;
}