/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:17:43 by lucia             #+#    #+#             */
/*   Updated: 2024/11/16 19:54:05 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;

	protected:

	public:
		~Cat(void);
		Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);

		Brain *getBrain(void) const;

		std::string getClassName(void) const;
		void makeSound(void) const;
} ;

#endif