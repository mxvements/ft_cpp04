/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:34:35 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 20:04:07 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];

	protected:

	public:
		~Character(void);
		Character(void);
		Character(const Character&src);
		Character &operator=(const Character &src);

		void setInventory(AMateria *inventory[4]);
		AMateria **getInventory(void);

		std::string const & getName() const override;
    	void equip(AMateria* m) override;
    	void unequip(int idx) override;
    	void use(int idx, ICharacter& target) override;
} ;

#endif