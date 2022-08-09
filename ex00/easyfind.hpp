/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:42:20 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 19:44:24 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include "color.h"

// template<typename T>
// void    print( T const &addr ) {
//         std::cout << addr << std::endl;
// }

// template<typename T>
// void    iter(T const *addr, int size, void (*f)(T const &)){

//         for(int i = 0; i < size; i++){
//                 (*f)(addr[i]);
//         }
// }

// class   ClassTest {
//         public:
//                 ClassTest( void ) : _n(42) { return; }
//                 ClassTest( ClassTest const & src ) { *this = src; return ; }
//                 ~ClassTest( void ) { return ; }

//                 int     getN( void )const { return (this->_n); }

//                 ClassTest       &operator=( ClassTest const & src ) { this->_n = src.getN(); return(*this); }
//         private:
//                 int     _n;
// };
// std::ostream    &operator<<(std::ostream &o, ClassTest const &src) { o << src.getN(); return (o); }

class NotFoundException : public std::exception {
    public:
        virtual const char* what()const throw() {
            return (RED "Error: Could not find occurence inside array." END);
        }
};

template<typename T>
void    easyfind( T const & x, int nb ) {
    int last = sizeof(x) / sizeof(*x);
    
    bool exist = std::find(x, x + last, nb);
    if (exist) {
        std::cout << "Element found\n";
    } else {
        throw NotFoundException();
    }
    return ;
}


#endif