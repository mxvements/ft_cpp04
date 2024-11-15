/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:52:31 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/15 22:21:00 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors.hpp"

Character::~Character(void)
{
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (this->_inventory[i])
	// 		delete (this->_inventory[i]);
	// }
	std::cout << YLLW << "Character destructor called" << RESET << std::endl;
}

Character::Character(void)
{
	std::cout << YLLW << "Character constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(const std::string name) : _name(name)
{
	std::cout << YLLW << "Character constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &src)
{
	std::cout << YLLW << "Character copy constructor called" << RESET << std::endl;
	*this = src;
	// for (int i = 0; i < 4; i++)
	// {
	// 	this->_inventory[i] = src._inventory[i];
	// }
}

Character &Character::operator=(const Character &src)
{
	std::cout << YLLW << "Character assignment overload called" << RESET << std::endl;
	this->_name = src._name;
	this->setInventory(src._inventory); //BUUUUUG
	// for (int i = 0; src._inventory[i]; i++)
	// {
	// 	if (this->_inventory[i])
	// 		delete this->_inventory[i];
	// 	this->_inventory[i] = src._inventory[i];
	// }
	return (*this);
}

void Character::setInventory(AMateria *const inventory[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = inventory[i];
	}
}

AMateria **Character::getInventory(void)
{
	return (this->_inventory);
}

// from the inheritance:
std::string const &Character::getName() const
{
	return (_name);
}

/**
 * equip materials in the inventory
 * always in the 1st empty slot the character finds
 * in case they tryy to add a Materia to a full inventory, or use/unequip an
 * existing Materia, dont do anything
 */
void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			if (i == 3)
				std::cout << "Full inventory" << std::endl;
			continue;
		}
		this->_inventory[i] = m;
		break;
	}
	return;
}
/**
 * unequip does not delete the Materia
 *
 * handle the materias your character left on the floor as you like
 * Save the addresses before callling unequip(), or anything else, but
 * dont forget that you have to avoid mem leaks
 */
void Character::unequip(int idx)
{
	if (!this->_inventory[idx])
	{
		std::cout << "Amateria at idx " << idx << " is null, cannot unequip"  << std::endl;
		return ;
	}
	for (int i = idx; (i + 1) < 4; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
	}
}
/**
 * use the materia at slot[idx] and pass the target parameter to the AMaterria::use
 * function
 */
void Character::use(int idx, ICharacter &target)
{
	AMateria *m = this->_inventory[idx];
	if (!m)
	{
		std::cout << "Amateria at idx " << idx << " is null, cannot use" << std::endl;
		return ;
	}
	m->use(target);
}
