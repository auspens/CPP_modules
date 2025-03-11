/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   madPrinter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:05:54 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/11 16:17:33 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/madPrinter.hpp"

madPrinter::madPrinter(){}
madPrinter::madPrinter(madPrinter const &src){(void)src;}
madPrinter::~madPrinter(){}
madPrinter &madPrinter::operator=(madPrinter const &other){(void) other; return *this;}
