/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 13:34:07 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist( void );
		PowerFist( std::string const & name, int apcost, int damage );
		PowerFist( PowerFist const & src);
		~PowerFist( void );
		
		PowerFist & operator=( PowerFist const & rhs );
		
		void attack() const;

};

#endif
