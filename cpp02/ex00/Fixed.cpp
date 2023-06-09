#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point_value = fixed.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed&    Fixed::operator=(Fixed &fixed){
    
    std::cout <<"Copy assignment operator called" << std::endl;
    this->fixed_point_value = fixed.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_value);
}

void    Fixed::setRawBits(const int raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
}
