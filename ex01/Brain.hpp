/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia <lucia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:18:39 by lucia             #+#    #+#             */
/*   Updated: 2024/10/20 21:28:03 by lucia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

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