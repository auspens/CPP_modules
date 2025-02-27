/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:47:23 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 16:51:55 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>


class Harl{
	public:
		Harl();
		Harl(Harl const & src);
		Harl & operator=(Harl const & other);
		~Harl();
		void complain( std::string level );

	private:
		std::string levels[4] ;
		void(Harl:: *func [4])(void);

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
