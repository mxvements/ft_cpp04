/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:34 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 19:00:18 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Brain.hpp"
#include "Colors.h"

class Animal 
{
	private:

	protected:
		std::string _type;
		Brain *_brain;

	public:
		virtual ~Animal(void); //important virtual destructor
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);

		void setType(std::string type);
		void setBrain(Brain *brain);
		std::string getType(void) const;
		Brain *getBrain(void) const;

		virtual std::string getClassName(void) const;
		virtual void makeSound(void) const = 0; //for the asbtract class, no implementation
} ;

#endif