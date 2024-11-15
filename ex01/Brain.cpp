/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:23:37 by lucia             #+#    #+#             */
/*   Updated: 2024/11/15 18:51:52 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain(void)
{
	std::cout << ORANGE << this->getClassName() << ": Destructor called" << RESET << std::endl;
}

Brain::Brain(void)
{
	std::cout << ORANGE << this->getClassName() << ": Constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "All animals are beautiful";
}

Brain::Brain(const Brain &src)
{
	std::cout << ORANGE << this->getClassName() << ": Constructor called" << RESET << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << ORANGE << this->getClassName() << ": Copy constructor called" << RESET << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < (int)src._ideas->length(); i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

void Brain::setIdeas(std::string ideas[100])
{
	for (int i = 0; i < (int)ideas->length(); i++)
		this->_ideas[i] = ideas[i];
}

std::string *Brain::getIdeas(void)
{
	return (this->_ideas);
}

std::string Brain::getClassName(void)
{
	return ("Brain");
}
