/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:31:02 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/03 16:05:51 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	return ;
}

Fixed::Fixed(const Fixed &value){

	std::cout << "Copy constructor called " << std::endl;
	*this = value;
	return ;

}

Fixed::~Fixed(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawbits member function called" << std::endl;
	return (this->value);
}

Fixed&	Fixed::operator=(const Fixed &to_assign){

	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_assign.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw){

	this->value = raw;
	return ;
}

