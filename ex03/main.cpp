/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:07:46 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/26 20:31:17 by luciama2         ###   ########.fr       */
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

	// 	//Cure cure;

	// 	//testing Cure class
	// }

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
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

	return (0);
}