/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:47:23 by auspensk          #+#    #+#             */
/*   Updated: 2025/01/20 17:02:36 by auspensk         ###   ########.fr       */
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
		void setFilter( char *str );

	private:
		enum Filters{
			INVALID = -1,
			ERROR,
			WARNING,
			INFO,
			DEBUG,
		};
		Filters filter;
		std::string levels[4] ;

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
