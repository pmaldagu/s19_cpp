/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/07 11:49:15 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;

	return;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I’ll be back..." << std::endl;
	
	return;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	//this->_n = src.getRawBits();

	return *this;
}

void AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

	return;
}

void AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;

	return;
}
void AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;

	return;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	return new AssaultTerminator;
}
