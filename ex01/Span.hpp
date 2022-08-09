/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 01:28:17 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include "color.h"

class   Span {
    
    public:
        Span( unsigned int N );
        Span( Span const & src );
        ~Span( void );

        void    addNumber( int nb );
        void    autoAddNumber( int nb );
        void    autoAddNumber( int nb, int max_val );

        unsigned int    shortestSpan( void );
        unsigned int    longestSpan( void );

        void    printVectorArray( void );

        Span  &operator=( Span const &src );

        class ReachedMaxNumberException : public std::exception {
            public:
                virtual const char* what()const throw();
        };
        class NotEnoughNumbersException : public std::exception {
            public:
                virtual const char* what()const throw();
        };

    private:
        Span( void );
        std::vector<int> _vec;
        unsigned int _N;
};

#endif