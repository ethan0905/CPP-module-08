/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:20:56 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 01:40:25 by esafar           ###   ########.fr       */
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

void    Span::autoAddNumber( int nb ) {
    
    srand(time(NULL));

    for (int i = 0; i < nb; i++)
    {
        addNumber(rand() % INT_MAX);
    }
    
    return ;
}

void    Span::autoAddNumber( int nb, int max_val ) {
    
    srand(time(NULL));

    for (int i = 0; i < nb; i++)
    {
        addNumber(rand() % max_val);
    }
    
    return ;
}

void    Span::printVectorArray( void ) {

    std::vector<int>::iterator itr;

    std::cout << WHITE "Vector Array: ";
    for (itr = this->_vec.begin(); itr != this->_vec.end(); itr++)
        std::cout << *itr << " ";
    std::cout << END << std::endl;
    
    return ;
}

// Comments inside function are used for debbuging purposes

unsigned int    Span::shortestSpan( void ) {

    if (this->_vec.size() < 2)
        throw Span::NotEnoughNumbersException();
    
    std::sort(this->_vec.begin(), this->_vec.end());

    unsigned int shortestSpan;
    
    shortestSpan = UINT_MAX;

    std::vector<int>::iterator itr;
    std::vector<int>::iterator jtr;

    itr = this->_vec.begin();

    while (itr != this->_vec.end())
    {
        jtr = (itr + 1);
        while (jtr != this->_vec.end())
        {
            if (static_cast<unsigned int>(*(itr + 1) - *itr) < shortestSpan && static_cast<unsigned int>(*(itr + 1) - *itr) != 0)
                shortestSpan = static_cast<unsigned int>(*(itr + 1) - *itr);
            // std::cout << CYAN "Max elem is: " << *std::max_element(itr, jtr) << END << std::endl;
            // std::cout << CYAN "Min elem is: " << *std::min_element(itr, jtr) << END << std::endl; 
            // std::cout << YELLOW "Res equals: " << (*(itr + 1) - *itr) << END << std::endl; 
            jtr++;
        }
        itr++;
    }

    return (shortestSpan);
}

unsigned int    Span::longestSpan( void ) {

    if (this->_vec.size() < 2)
        throw Span::NotEnoughNumbersException();

    std::sort(this->_vec.begin(), this->_vec.end());

    unsigned int longestSpan;

    longestSpan = static_cast<unsigned int>(*std::max_element(this->_vec.begin(), this->_vec.end()) - *std::min_element(this->_vec.begin(), this->_vec.end()));

    return (longestSpan);
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
