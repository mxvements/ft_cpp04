/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:22:46 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/15 20:49:07 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"


class Cure: public AMateria
{
	private:

	protected:

	public:
		~Cure(void);
		Cure(void);
		Cure(const Cure &src);
		Cure &operator=(const Cure &src);

		AMateria *clone() const;
		// void use(ICharacter &target);
} ;

#endif