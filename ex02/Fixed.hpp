/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:32:24 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:26 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cmath>


class Fixed{

	public:

		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int integer);
		Fixed(const float floaty);
		~Fixed(void);
		Fixed& 	operator=(const Fixed &value);
		bool	operator>(const Fixed &value) const;
		bool	operator<(const Fixed &value) const;
		bool	operator>=(const Fixed &value) const;
		bool	operator<=(const Fixed &value) const;
		bool	operator==(const Fixed &value) const;
		bool	operator!=(const Fixed &value) const;

		Fixed	operator+(const Fixed &value) const;
		Fixed	operator-(const Fixed &value) const;
		Fixed	operator*(const Fixed &value) const;
		Fixed	operator/(const Fixed &value) const;

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		
		

		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static const Fixed	min(const Fixed &a, const Fixed &b);
		static const Fixed	max(const Fixed &a, const Fixed &b);
		
	private:

		int	value;
		static const int	bits = 8;
		
};
		std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif
