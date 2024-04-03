/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:12:46 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:40 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



/****************/
/****CONSTRUC****/
/****************/


Fixed::Fixed(void){

	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	return ;
}

Fixed::Fixed(const Fixed &value){

//	std::cout << "Copy constructor called " << std::endl;
	*this = value;
	return ;
}

Fixed::Fixed(const int integer){

//	std::cout << "Integer constructor called" << std::endl;
	this->value = integer << this->bits;
	return;
}

Fixed::Fixed(const float floaty){

//	std::cout << "Floaty constructor called" << std::endl;
	this->value = (int)roundf((floaty * (1 << this->bits)));
	return;
}

Fixed::~Fixed(void){

//	std::cout << "Destructor called" << std::endl;
	return ;
}

/****************/
/****OPERATOR****/
/****************/


Fixed&	Fixed::operator=(const Fixed &to_assign){

//	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_assign.getRawBits();
	return (*this);
}

bool	Fixed::operator==(const Fixed &value) const{

	if (this->value == value.value)
		return (true);
	else
		return (false);
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

int	Fixed::getRawBits(void) const {

//	std::cout << "getRawbits member function called" << std::endl;
	return (this->value);
}


void	Fixed::setRawBits(int const raw){

	this->value = raw;
	return ;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &obj){

	out << obj.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &value) const{

	if (this->value > value.value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &value) const{

	if (this->value < value.value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &value) const{

	if (this->value >= value.value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &value) const{

	if (this->value <= value.value)
		return (true);
	else
		return (false);
}


bool	Fixed::operator!=(const Fixed &value) const{

	if (this->value != value.value)
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(const Fixed &value) const{

	Fixed	out;

	out.setRawBits(this->value + value.value);
	return (out);
}

Fixed	Fixed::operator-(const Fixed &value) const{

	Fixed	out;

	out.setRawBits(this->value - value.value);
	return (out);
}

Fixed	Fixed::operator*(const Fixed &value) const{

	Fixed	out;

	out.setRawBits((long)this->value * value.value / 256);
	return (out);
}

Fixed	Fixed::operator/(const Fixed &value) const{

	Fixed	out;

	out.setRawBits((long)this->value * 256 / value.value);
	return (out);
}

Fixed	Fixed::operator++(void){

	this->value++;
	return (*this);
}

Fixed	Fixed::operator--(void){

	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int){
	
	Fixed	tmp(*this);
	this->value++;
	return (tmp);
}

Fixed	Fixed::operator--(int){

	Fixed	tmp(*this);
	this->value--;
	return (tmp);
}

Fixed	Fixed::min(Fixed &a, Fixed &b){

	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b){

	if (a >= b)
		return (a);
	else
		return (b);
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b){

	if (a <= b)
		return (a);
	else
		return (b);
}

const Fixed	Fixed::max(const Fixed &a, const Fixed &b){

	if (a >= b)
		return (a);
	else
		return (b);
}




