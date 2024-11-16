/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:07:46 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/16 16:14:44 by luciama2         ###   ########.fr       */
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
		// test of Character class, mostly equip and unequip functs
		std::cout << std::endl;
		std::cout << "/****** Character ******/" << std::endl;
		Character c("paco");
		Ice *ice1 = new Ice();
		Ice *ice2 = new Ice();
		Cure *cure1 = new Cure();
		Cure *cure2 = new Cure();
		Cure *cure3 = new Cure();
		// Character has 4 slots for materias
		c.equip(ice1); //0
		c.equip(cure1); //1
		c.use(3, c);  // check for null amateria
		c.unequip(3); // check for null materia
		c.equip(ice2); //2
		c.equip(cure2); //3
		c.equip(cure3); //4 -  extra materia, cannot equip
		c.use(2, c);
		AMateria *unequiped = c.getInventory()[2];
		c.unequip(2); // unequips ann ice, next is cure
		delete unequiped;
		c.use(2, c); //nest amateria
		// check deep copy of Character
		Character c_cp(c);
		std::cout << "c address: \t" << &c << std::endl;
		std::cout << "cp addres: \t" << &c_cp << std::endl;
		std::cout << "c inventory addr: \t" << c.getInventory() << std::endl;
		std::cout << "cp inventory addr: \t" << c_cp.getInventory() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "inventory item of c, \tidx: " << i << " w/address:\t" << c.getInventory()[i]<< std::endl;
			std::cout << "inventory item, of cpy \tidx: " << i << " w/address:\t" << c_cp.getInventory()[i]<< std::endl;
		}
		delete ice2; //unequiped
		delete cure3; //never equiped
		delete ice1;
		delete cure1;
		delete cure2;
	}
	
	{
		// Check for MateriaSource class
		std::cout << std::endl;
		std::cout << "/****** Materia Source ******/" << std::endl;
		MateriaSource mt;
		Ice *ice = new Ice();
		Cure *cure = new Cure();
		mt.learnMateria(ice);
		mt.learnMateria(cure);
		AMateria *lm_ice = mt.createMateria("ice"); //creates from knwon materias
		std::cout << lm_ice->getType() << std::endl;
		AMateria *lm_cure = mt.createMateria("cure");
		std::cout << lm_cure->getType() << std::endl;
		mt.learnMateria(lm_ice);
		mt.learnMateria(lm_cure);
		mt.learnMateria(ice); //Full learn materias
		//Check deep copying
		MateriaSource mt_cp(mt);
		std::cout << "mt address: \t" << &mt << std::endl;
		std::cout << "mt_cp addres: \t" << &mt_cp << std::endl;
		std::cout << "mt inventory addr: \t" << mt.getKnownMaterias() << std::endl;
		std::cout << "mt_cp inventory addr: \t" << mt_cp.getKnownMaterias() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "mt amateria at idx:\t" << i << "\tw/addr:t" << mt.getKnownMaterias()[i] << std::endl;
			std::cout << "mt_cp amateria at idx:\t" << i << "\tw/addr:t" << mt_cp.getKnownMaterias()[i] << std::endl;
		}
		delete ice;
		delete cure;	
	}

	{
		// Check for MateriaSource class
		std::cout << std::endl;
		std::cout << "/****** Provided main ******/" << std::endl;
		
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice()); //leak
		src->learnMateria(new Cure()); //leak
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	return (0);
}