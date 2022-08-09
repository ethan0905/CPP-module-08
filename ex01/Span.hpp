/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:37:50 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include "color.h"

class   Span {
    
    public:
        Span( unsigned int N );
        ~Span( void );

        void    addNumber( int nb );

        unsigned int    shortestSpan( void );
        unsigned int    longestSpan( void );

        Span  &operator=( Span const &src );

        class ReachedMaxNumberException : public std::exception {
            public:
                virtual const char* what()const throw();
        };

    private:
        Span( void );
        Span( Span const & src );
        std::vector<int> _vec;
        unsigned int _N;
};

#endif