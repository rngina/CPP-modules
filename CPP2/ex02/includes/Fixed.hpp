#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		Fixed operator+(const Fixed &num) const;
		Fixed operator-(const Fixed &num) const;
		Fixed operator*(const Fixed &num) const;
		Fixed operator/(const Fixed &num) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		bool operator>(const Fixed &num) const;
		bool operator<(const Fixed &num) const;
		bool operator>=(const Fixed &num) const;
		bool operator<=(const Fixed &num) const;
		bool operator==(const Fixed &num) const;
		bool operator!=(const Fixed &num) const;

		Fixed static max(const Fixed &a, const Fixed &b);
		Fixed static min(const Fixed &a, const Fixed &b);
		Fixed static &max(Fixed &a, Fixed &b);
		Fixed static &min(Fixed &a, Fixed &b);

	private:
		int value;
		static const int bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &num);

#endif