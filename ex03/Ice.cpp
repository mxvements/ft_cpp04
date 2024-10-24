/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:50:52 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 19:14:56 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(void)
{
	std::cout << "Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &src)
{
	std::cout << "Ice assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *cloned_ice = new Ice();
	*cloned_ice = *this;
	return (cloned_ice);
}

