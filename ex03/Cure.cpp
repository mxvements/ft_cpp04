/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:58:37 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/26 16:25:40 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Colors.hpp"

Cure::~Cure(void)
{
	std::cout << BLUE << "Cure destructor called" << RESET << std::endl;
}

Cure::Cure(void)
{
	std::cout << BLUE << "Cure construcctor called" << RESET << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &src)
{
	std::cout << BLUE << "Cure copy operator called" << RESET << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &src)
{
	std::cout << BLUE << "Cure assignment operator called" << RESET << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *cloned_cure = new Cure();
	*cloned_cure = *this;
	return (cloned_cure);
}
