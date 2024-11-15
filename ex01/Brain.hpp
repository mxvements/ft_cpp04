/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:18:39 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 18:51:26 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include "Colors.h"

class Brain 
{
	private:
		std::string _ideas[100];

	protected:

	public:
		virtual ~Brain(void);
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);

		void setIdeas(std::string ideas[100]);
		std::string *getIdeas(void);

		std::string getClassName(void);
} ;

#endif