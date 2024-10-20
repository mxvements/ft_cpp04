/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:22:09 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <iomanip>

class WrongAnimal 
{
	private:

	protected:
		std::string _type;

	public:
		~WrongAnimal(void);
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);

		void setType(std::string type);
		std::string getType(void) const;

		virtual std::string getClassName(void) const;
		virtual void makeSound(void) const;
} ;

#endif