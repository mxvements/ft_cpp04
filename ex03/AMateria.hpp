/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:08:05 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/24 19:33:06 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	private:

	public:
		~AMateria(void);
		AMateria(void);
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);

		void setType(std::string type);
		std::string const &getType() const; //Returns the materia type

		virtual AMateria *clone() const = 0; //this converts the class in an abstract class
		virtual void use(ICharacter &target); //TODO
} ;

#endif