/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:22:15 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include "color.h"

class NotFoundException : public std::exception {
    public:
        virtual const char* what()const throw() {
            return (RED "Error: Could not find occurence inside array." END);
        }
};

class   Span {
    
    public:
        Span( void );
        Span( unsigned int N );
        Span( Span const & src );
        ~Span( void );

        Span  &operator=( Span const &src );

    private:
};

#endif