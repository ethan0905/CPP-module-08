/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 03:20:07 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <deque>
// #include <string>
// #include <list>
// #include <limits.h>

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <list>
#include <string>

#include "color.h"

template<typename T>
class   MutantStack : public std::stack<T> {
    
    public:
        MutantStack( void ) {

            return ;
        }
        MutantStack( MutantStack const & src ) {

            *this = src;
            return ;
        }
        virtual ~MutantStack( void ) {
            
            return ;
        }

        MutantStack  &operator=( MutantStack const &src ) {
            
            this->c = src.c;   
            return (*this);
        }

        typedef typename std::deque<T>::iterator iterator;

        iterator begin() {

            return (this->c.begin());
        }
        iterator end() {

            return (this->c.end());
        }
};

#endif