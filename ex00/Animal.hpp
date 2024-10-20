/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:34 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:22:13 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Animal 
{
	private:

	protected:
		std::string _type;

	public:
		~Animal(void);
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);

		void setType(std::string type);
		std::string getType(void) const;

		virtual std::string getClassName(void) const;
		virtual void makeSound(void) const;
} ;

#endif