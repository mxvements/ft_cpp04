/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:54 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:42:14 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	protected:

	public:
		~Dog(void);
		Dog(void);
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		
		std::string getClassName(void) const;
		void makeSound() const;
		
} ;

#endif