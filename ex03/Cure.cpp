/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:58:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 19:15:12 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(void)
{
	std::cout << "Cure construcctor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &src)
{
	std::cout << "Cure copy operator called" << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &src)
{
	std::cout << "Cure assignment operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *cloned_cure = new Cure();
	*cloned_cure = *this;
	return (cloned_cure);
}
