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
