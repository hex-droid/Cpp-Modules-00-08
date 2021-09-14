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
	int _nb;

public:
	int		nb;
	float	x;
	
	Sample(void);
	Sample(int nb, float x);
	~Sample(void);
	
	
	void	set_nb(int nb);
	int		get_nb(void);
	
	void	debugg(void) const;
};


#endif