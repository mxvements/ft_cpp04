/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:52:31 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 20:04:47 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(void)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &src)
{
	std::cout << "Character assignment overload called" << std::endl;
	this->_name = src._name;
	for (int i = 0; src._inventory[i]; i++)
	{
		this->_inventory[i] = src._inventory[i];		
	}
	return (*this);	
}

//TODO:

// mine:
// void setInventory(AMateria *inventory[4]);
// AMateria **getInventory(void);	

// from the inheritance:
std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	return ;
}

void Character::unequip(int idx)
{
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	return ;
}
