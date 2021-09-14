/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:11:55 by ztaouil           #+#    #+#             */
/*   Updated: 2021/09/14 19:38:00 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample (void){
	std::cout << "Constructor Called" << std::endl;
}

Sample::Sample(int nb, float x) : nb(nb), x(x){
	std::cout << "Parameterized Constructor Called" << std::endl;
}


Sample::~Sample (void){
	std::cout << "Destructor Called" << std::endl;
}

void	Sample::debugg(void) const {
	std::cout << "\n" << "nb : " << this->nb << std::endl;
	std::cout << "x  : " << this->x<< std::endl;
	std::cout << "_nb : " << this->_nb << "\n" << std::endl;
}

void	Sample::set_nb(int nb){
	this->_nb = nb;
}

int		Sample::get_nb(void){
	return (this->_nb);
}