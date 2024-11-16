/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:34:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/16 20:16:46 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <iomanip>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		Character(void);

	protected:

	public:
		virtual ~Character(void);
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