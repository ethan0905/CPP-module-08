/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:20:56 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:26:17 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {
    
    std::cout << CYAN "Span:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Span::Span( unsigned int N ) {

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

const char    *Span::ReachedMaxNumberException::what()const throw() {
    
    return (RED "Error: reached max number." END);
}

Span   &Span::operator=( Span const &src ) {

    *this = src;

    return (*this);
}
