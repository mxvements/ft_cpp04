/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:17:43 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:37:20 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:

	protected:

	public:
		~Cat(void);
		Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);

		std::string getClassName(void) const;
		void makeSound(void) const;
} ;

#endif