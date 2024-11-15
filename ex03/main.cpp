/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:07:46 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/15 22:19:41 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	// {
	// 	Ice ice;
	// 	Character target;

	// 	//testing Ice class
	// 	std::cout << "Testing ice class" << std::endl;
	// 	std::cout << "\tobject ptr:" << &ice << std::endl;
	// 	std::cout << "\tgetType(): " << ice.getType() << std::endl;
	// 	std::cout << "\tuse(target): ";
	// 	ice.use(target);
	// 	std::cout << "\tAMateria::use(target): ";
	// 	ice.AMateria::use(target);
	// 	std::cout << std::endl;

	// 	Ice ice_copy(ice);
	// 	std::cout << "\tice copy ptr: " << &ice_copy << std::endl;
	// 	std::cout << "\tgetType(): " << ice_copy.getType() << std::endl;
	// 	std::cout << "\tuse(target): ";
	// 	ice_copy.use(target);
	// 	std::cout << std::endl;

	// 	Ice ice_assign;
	// 	ice_assign = ice;
	// 	std::cout << "\tice assign ptr: " << &ice_assign << std::endl;
	// 	std::cout << "\tgetType(): " << ice_assign.getType() << std::endl;
	// 	std::cout << "\tuse(target): ";
	// 	ice_assign.use(target);
	// 	std::cout << std::endl;

	// 	AMateria *ice_clone = ice.clone();
	// 	std::cout << "\tice (as AMateria) clone ptr: " << ice_clone << std::endl;
	// 	std::cout << "\tgetType(): " << ice_clone->getType() << std::endl;
	// 	std::cout << "\tuse(target): ";
	// 	ice_clone->use(target);
	// 	std::cout << std::endl;
	// }
	{
		//test of Character class, mostly equip and unequip functs
		Character c("paco");
		Ice *ice1 = new Ice();
		Ice *ice2 = new Ice();
		Cure *cure1 = new Cure();
		Cure *cure2 = new Cure();
		Cure *cure3 = new Cure();
		
		//Character has 4 slots for materias
		c.equip(ice1);
		c.equip(cure1);
		
		c.use(3, c); //check for null amateria
		c.unequip(3); //check for null materia

		c.equip(ice2);
		c.equip(cure2);
		c.equip(cure3); //extra materia, cannot equip
		
		c.use(2, c);
		c.unequip(2); //unequips ann ice, next is cure
		c.use(2, c);
	
		c.unequip(0);
		c.unequip(1);
		c.unequip(2);
		c.unequip(3);

		//check deep copy of Character
		Character c_cp(c);
		std::cout << "c address: " << &c << std::endl;
		std::cout << "cp addres: " << &c_cp << std::endl;
		std::cout << "c inventory addr: " << c.getInventory() << std::endl;
		std::cout << "cp inventory addr: "<< c_cp.getInventory() << std::endl;

		delete ice1;
		delete ice2;
		delete cure1;
		delete cure2;
		delete cure3;
	}

	// IMateriaSource *src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter *me = new Character("me");
	// AMateria *tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter *bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;

	return (0);
}