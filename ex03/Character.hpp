/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:34:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/26 19:07:08 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <iomanip>

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
} ;

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	protected:

	public:
		~Character(void);
		Character(void);
		Character(const std::string name);
		Character(const Character&src);
		Character &operator=(const Character &src);
		void setInventory(AMateria *const inventory[4]);
		AMateria **getInventory(void);
		std::string const & getName() const;
    	void equip(AMateria* m);
    	void unequip(int idx);
    	void use(int idx, ICharacter& target);
} ;

#endif