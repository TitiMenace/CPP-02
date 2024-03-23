#include "Fixed.hpp"


Fixed::Fixed(void){

	std::cout << "Default Constructor called !" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &value){

	std::cout << "Copy Constructor called " << std::endl;
	this->value = value.getRawBits();
	return ;

}

Fixed::~Fixed(void){

	std::cout << "Destructor called !" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawbits func called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw){

	std::cout << "setRawBits func called" << std::endl;
	this->value = raw;
	return ;
}

