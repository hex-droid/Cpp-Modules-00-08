/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:09:45 by ztaouil           #+#    #+#             */
/*   Updated: 2021/09/14 19:40:01 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample{
	private:
		Sample(void);
	public:
		Sample(int nb);
		~Sample(void);
		int		nb;
		int		foo;
		int		bar1;
		void	bar(void);
};


#endif