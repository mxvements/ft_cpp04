/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:46:13 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/16 16:13:36 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::~MateriaSource(void)
{
	std::cout << ORANGE << "MateriaSource destructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(void)
{
	std::cout << ORANGE << "MateriaSource constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_known_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << ORANGE << "MateriaSource copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->_known_materias[i] = NULL;
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_known_materias[i])
			this->_known_materias[i] = NULL;
		if (!src._known_materias[i])
			continue;
		this->_known_materias[i] = src._known_materias[i]; 
	}
	std::cout << ORANGE << "MateriaSource assignment overload called" << RESET << std::endl;
	return (*this);
}

void MateriaSource::setKnownMaterias(AMateria *const known_materias[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_known_materias[i])
			this->_known_materias[i] = NULL;
		if (!known_materias[i])
			continue;
		this->_known_materias[i] = known_materias[i]; 
	}
	return;
}

AMateria **MateriaSource::getKnownMaterias(void)
{
	return (this->_known_materias);
}

/**
 * copies the materia passed as a parameter and store it in memory so it can be cloned
 * later. Like the character, the materiasource, can know at most 4 materias
 * They are not necessarily unique
 */
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_known_materias[i])
		{
			std::cout << "adding materia at idx: " << i << std::endl;
			this->_known_materias[i] = m;
			return ;
		}
	}
	std::cout << "Full known materias catalog!" << std::endl;
	return ;
}

/**
 * returns a new materia
 * the latter is a copy of the materia previously learned by the MateriaSource
 * whose type equals the one passed as parameter. Return 0 if the type if unknown
 */
AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_known_materias[i] && this->_known_materias[i]->getType().compare(type) == 0)
			return ((this->_known_materias[i]));
	}
	return (0);
}
