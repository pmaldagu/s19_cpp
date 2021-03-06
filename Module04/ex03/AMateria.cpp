/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/13 11:30:57 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type )
{
	this->_type = type;

	return;
}

AMateria::AMateria( AMateria const & src )
{
	this->_type = src.getType();
	this->_xp = src.getXP();

	return;
}

AMateria::~AMateria( void )
{
	return;
}

std::string const & AMateria::getType( void ) const
{
	return this->_type;
}

unsigned int AMateria::getXP( void ) const
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	
	return;
}
