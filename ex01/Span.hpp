/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:26:01 by esafar           ###   ########.fr       */
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
        Span( void );
        Span( unsigned int N );
        Span( Span const & src );
        ~Span( void );

        void    addNumber( void );

        Span  &operator=( Span const &src );

        class ReachedMaxNumberException : public std::exception {
            public:
                virtual const char* what()const throw();
        };

    private:
};

#endif