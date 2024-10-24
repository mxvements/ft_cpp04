/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:22:46 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/23 19:25:40 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

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
} ;

#endif