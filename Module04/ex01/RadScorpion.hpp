/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 18:26:25 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion( void );
		RadScorpion( RadScorpion const & src);
		virtual ~RadScorpion( void );
		
		RadScorpion & operator=( RadScorpion const & rhs );
		
};

#endif
