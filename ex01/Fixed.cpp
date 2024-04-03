/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:33:51 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/03 16:09:23 by tschecro         ###   ########.fr       */
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

Fixed::Fixed(const int integer){

	std::cout << "Int constructor called" << std::endl;
	this->value = integer << this->bits;
	return;
}

Fixed::Fixed(const float floaty){

	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf((floaty * (1 << this->bits)));
	return;
}

float	Fixed::toFloat(void) const{

	float	to_Float;

	to_Float = (float)this->value;
	to_Float = to_Float / 256;
	return (to_Float);
}

int	Fixed::toInt(void) const {

	return (this->value >> this->bits);
}


Fixed::~Fixed(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {

//	std::cout << "getRawbits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &out, const Fixed &obj){

	out << obj.toFloat();
	return (out);
}
