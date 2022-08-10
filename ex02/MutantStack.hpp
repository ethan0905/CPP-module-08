/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 02:25:32 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include "color.h"

template<typename T>
class   MutantStack : public std::stack {
    
    public:
        MutantStack( unsigned int N );
        MutantStack( MutantStack const & src );
        ~MutantStack( void );

        MutantStack  &operator=( MutantStack const &src );

        class ReachedMaxNumberException : public std::exception {
            public:
                virtual const char* what()const throw();
        };
        class NotEnoughNumbersException : public std::exception {
            public:
                virtual const char* what()const throw();
        };

    private:
        MutantStack( void );
        std::vector<int> _vec;
        unsigned int _N;
};

#endif