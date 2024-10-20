/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:48:56 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 19:23:15 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	protected:

	public:
		~WrongCat(void);
		WrongCat(void);
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &src);

		std::string getClassName(void) const;
		void makeSound(void) const;
} ;

#endif