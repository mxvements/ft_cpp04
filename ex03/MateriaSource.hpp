/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:09:15 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/16 20:17:57 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Colors.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_known_materias[4];

	public:
		~MateriaSource(void);
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);
		void setKnownMaterias(AMateria *const known_materias[4]);
		AMateria **getKnownMaterias(void);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
} ;

#endif
