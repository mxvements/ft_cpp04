/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:08:07 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 19:33:04 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria(void)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	std::cout << "AMateria assign overload called" << std::endl;
	this->_type = src._type;
	return (*this);
}

void AMateria::setType(std::string type)
{
	this->_type = type;
}

std::string const &AMateria::getType() const
{
	return this->_type;	
}

/**
 * Ice: "* shoots an ice at <name> *"
 * Cure: "* heals <name>'s wounds *"
 * 
 * being
 * <name> the name of the Character passed as parameter
 */
void AMateria::use(ICharacter &target)
{
	const std::string name = target.getName();
	
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << name << " *" << std::endl;
	if (this->_type.compare("cure") == 0)
		std::cout << "* heals " << name << "'s wounds *" << std::endl;
}
