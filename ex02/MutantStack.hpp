/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:17:04 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 02:42:38 by esafar           ###   ########.fr       */
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
            
            *this = src;   
            return (*this);
        }

    private:
        typedef typename std::deque<T>::iterator iterator;

        iterator begin() {

            return (this->c.begin());
        }
        iterator end() {

            return (this->c.end());
        }
};

#endif