/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:17:53 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 19:11:16 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

Cat::Cat(void): Animal("Cat")
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src): Animal("Cat")
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string Cat::getClassName(void) const
{
	return ("Cat");
}

void Cat::makeSound(void) const
{
	std::cout << "miaau" << std::endl;
}
