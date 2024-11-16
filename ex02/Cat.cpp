/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:17:53 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 20:10:46 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << LGREEN << this->getClassName() << ": Destructor called" << RESET << std::endl;
}

Cat::Cat(void): Animal(Cat::getClassName())
{
	std::cout << LGREEN << this->getClassName() << ": Constructor called" << RESET << std::endl;
	this->_type = Cat::getClassName();
}

Cat::Cat(const Cat &src): Animal(Cat::getClassName()), _brain(new Brain())
{
	std::cout << LGREEN << this->getClassName() << ": Copy constructor called" << RESET << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << LGREEN << this->getClassName() << ": Assignment overload called" << RESET << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}


std::string Cat::getClassName(void) const
{
	return ("Cat");
}

void Cat::makeSound(void) const
{
	std::cout << "miaau" << std::endl;
}
