/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:48:54 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 17:54:45 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)
{
	std::cout << this->getClassName() << ": Destructor called" << std::endl;
}

WrongCat::WrongCat(void): WrongAnimal("Cat")
{
	std::cout << this->getClassName() << ": Constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal()
{
	std::cout << this->getClassName() << ": Copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << this->getClassName() << ": Assignment overload called" << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string WrongCat::getClassName(void) const
{
	return ("WrongCat");
}

void WrongCat::makeSound(void) const
{
	std::cout << "wrong miaau" << std::endl;
}
