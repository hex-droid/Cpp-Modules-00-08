/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:21:16 by ztaouil           #+#    #+#             */
/*   Updated: 2021/09/14 18:09:46 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


namespace test{
	int	x = 6;
}

int		main(){
	char	buff[100];

	std::cout << "Hello, World!" << std::endl;
	int x = 2;
	std::cout << "x = " << x << std::endl;
	std::cout << "test::x = " << test::x << std::endl;
	std::cout << "Input a word! : ";
	std::cin >> buff;
	std::cout << "Word you entered [" << buff << "]" << std::endl;

	return (0);
}