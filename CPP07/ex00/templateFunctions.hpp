/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teplateFunctions.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:54:40 by auspensk          #+#    #+#             */
/*   Updated: 2025/03/14 16:58:28 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
};

template <typename T>
T max(T const &a, T const &b){ return (a>b ? a : b);};

template <typename T>
T min(T const &a, T const &b){return(a < b ? a : b);};
