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

Sample::Sample (void) : nb(33), foo(22), bar1(33){
	std::cout << "Constructor Called!" << std::endl;
}

Sample::Sample(int nb){
	std::cout << "Parameterized Constructor Called!" << std::endl;
	this->nb = nb;
}


Sample::~Sample (void){
	std::cout << "Destructor Called!" << std::endl;
}

void	Sample::bar(void){
	this->nb = 42;
	
}