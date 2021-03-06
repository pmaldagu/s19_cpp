/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/07 14:31:50 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) 
{
	this->_unit = nullptr;
	this->_members = 0;

	return;
}

Squad::Squad( Squad const & src )
{
	*this = src;

	return;
}

Squad::~Squad( void )
{
	int i;

	i = 0;
	while (i < this->_members)
	{
		delete _unit[i];
		i++;
	}
	delete [] _unit;

	return;
}

Squad & Squad::operator=(Squad const & src)
{
	this->_members = src.getCount();
	this->_unit = src.getAllSquad();

	return *this;
}

int Squad::getCount( void ) const
{
	return this->_members;
}

ISpaceMarine** Squad::getAllSquad( void ) const
{
	return this->_unit;
}
	
ISpaceMarine* Squad::getUnit( int n ) const
{
	if ( n > this->_members || n < 0 )
	{
		std::cout << "This Unit doesn't exits" << std::endl;
		return nullptr;
	}
	return this->_unit[n];
}

int Squad::push( ISpaceMarine* newUnit)
{
	int i;
	ISpaceMarine** tmp;

	i = 0;
	tmp = new ISpaceMarine* [this->_members + 1];
	while (i < this->_members)
	{
		tmp[i] = this->_unit[i];
		i++;
	}
	tmp[i] = newUnit;
	delete [] this->_unit;
	this->_unit = tmp;
	this->_members += 1;

	return this->_members;
}
