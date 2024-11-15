/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:25:50 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/15 20:49:03 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria
{
	private:

	protected:

	public:
		~Ice(void);
		Ice(void);
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);

		AMateria *clone() const;
		// void use(ICharacter &target);
} ;

#endif

