/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:50:52 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/15 20:41:56 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Colors.hpp"

Ice::~Ice(void)
{
	std::cout << CYAN << "Ice destructor called" << RESET << std::endl;
}

Ice::Ice(void):  AMateria("ice")
{
	std::cout << CYAN << "Ice constructor called" << RESET << std::endl;
	// this->_type = "ice";
}

Ice::Ice(const Ice &src): AMateria(src.getType())
{
	std::cout << CYAN << "Ice copy constructor called" << RESET << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &src)
{
	std::cout << CYAN << "Ice assignment operator called" << RESET << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *cloned_ice = new Ice();
	*cloned_ice = *this;
	return (cloned_ice);
}

// void Ice::use(ICharacter &target)
// {
// 	const std::string name = target.getName();
// 	std::cout << "* shoots an ice bolt at " << name << " *" << std::endl;
// }

