/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:21:16 by ztaouil           #+#    #+#             */
/*   Updated: 2021/09/15 19:28:09 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string	buff;

	std::cout << "Enter someshit : ";
	std::getline(std::cin, buff);
	std::cout << "buff : " << buff << std::endl;
	return (0);
}