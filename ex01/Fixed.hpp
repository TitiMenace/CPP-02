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
		
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		friend std::ostream& operator<<(std::ostream& out, const Fixed& obj);
		
	private:

		int	value;
		static const int	bits = 8;
		
};


#endif
