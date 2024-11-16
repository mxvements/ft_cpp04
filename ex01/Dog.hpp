/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:54 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 19:54:15 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;

	protected:

	public:
		~Dog(void);
		Dog(void);
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		
		Brain *getBrain(void) const;

		std::string getClassName(void) const;
		void makeSound() const;
		
} ;

#endif