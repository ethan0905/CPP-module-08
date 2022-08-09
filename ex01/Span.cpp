/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:20:56 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:52:53 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {
    
    std::cout << CYAN "Span:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Span::Span( unsigned int N ) : _N(N) {

    std::cout << CYAN "Span:: " GREEN "Parametric constructor called" END << std::endl;

    return ;
}

Span::Span( Span const & src ) {

    std::cout << CYAN "Span:: " GREEN "Copy constructor called" END << std::endl;
    *this = src;
    
    return ;
}

Span::~Span( void ) {

    std::cout << CYAN "Span:: " RED "Destructor called" END << std::endl;

    return ;
}

void    Span::addNumber( int nb ) {

    if (this->_vec.size() < this->_N)
        this->_vec.push_back(nb);
    else
        throw Span::ReachedMaxNumberException();

    return ;
}

unsigned int    Span::shortestSpan( void ) {

    if (this->_vec.size() < 2)
        throw Span::NotEnoughNumbersException();
        
    return 2;
}

unsigned int    Span::longestSpan( void ) {

    if (this->_vec.size() < 2)
        throw Span::NotEnoughNumbersException();

    std::sort(this->_vec.begin(), this->_vec.end());

    return (this->_vec[this->_vec.size() - 1] - this->_vec[0]);
}

const char    *Span::ReachedMaxNumberException::what()const throw() {
    
    return (RED "Error: reached max number element." END);
}

const char    *Span::NotEnoughNumbersException::what()const throw() {
    
    return (RED "Error: not enough numbers to proceed the check." END);
}

Span   &Span::operator=( Span const &src ) {

    (void)src;

    return (*this);
}
