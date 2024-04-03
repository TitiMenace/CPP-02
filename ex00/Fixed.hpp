/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:31:40 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/03 15:31:47 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Fixed{

	public:

		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed& operator=(const Fixed &value);
		int	getRawBits(void)const;
		void		setRawBits(int const raw);

	private:

		int	value;
		static const int	bits = 8;
		
};

#endif
