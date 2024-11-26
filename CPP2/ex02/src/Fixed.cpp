#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

//default constructor
Fixed::Fixed() : value(0) {}

//int constructor
Fixed::Fixed(const int value) {
	this->value = value << bits;
}

//float constructor
Fixed::Fixed(const float value) {
	this->value = roundf(value * (1 << bits));
}

//copy constructor
Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

//destructor
Fixed::~Fixed() {} 

//assignment operator
Fixed &Fixed::operator=(const Fixed &copy) {
	value = copy.getRawBits();
	return *this;
}

//returns the raw value
int Fixed::getRawBits(void) const {
	return value;
}

//sets the raw value
void Fixed::setRawBits(int const raw) {
	value = raw;
}

//converts the value to a float
float Fixed::toFloat(void) const {
	return (float)value / (1 << bits);
}

//converts the value to an int
int Fixed::toInt(void) const {
	return value >> bits;
}

//overload of the << operator to send Fixed instances to the output stream
std::ostream &operator<<(std::ostream &o, Fixed const &num)
{
  o << num.toFloat();
  return o;
}

//overload of the arithmetic operators
Fixed Fixed::operator+(const Fixed &num) const {
	return Fixed(toFloat() + num.toFloat());
}

Fixed Fixed::operator-(const Fixed &num) const {
	return Fixed(toFloat() - num.toFloat());
}

Fixed Fixed::operator*(const Fixed &num) const {
	return Fixed(toFloat() * num.toFloat());
}

Fixed Fixed::operator/(const Fixed &num) const {
	return Fixed(toFloat() / num.toFloat());
}

//i++
Fixed &Fixed::operator++(void) {
	value++;
	return *this;
}

//++i
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

//i--
Fixed &Fixed::operator--(void) {
	value--;
	return *this;
}

//--i
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

//overload of the comparison operators
bool Fixed::operator>(const Fixed &num) const {
	return value > num.getRawBits();
}

bool Fixed::operator<(const Fixed &num) const {
	return value < num.getRawBits();
}

bool Fixed::operator>=(const Fixed &num) const {
	return value >= num.getRawBits();
}

bool Fixed::operator<=(const Fixed &num) const {
	return value <= num.getRawBits();
}

bool Fixed::operator==(const Fixed &num) const {
	return value == num.getRawBits();
}

bool Fixed::operator!=(const Fixed &num) const {
	return value != num.getRawBits();
}

//static functions to compare two Fixed instances
Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}