/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:42:20 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 21:46:59 by esafar           ###   ########.fr       */
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



template<typename T>
void    easyfind( T const & x, int nb ) {

    std::cout << WHITE "Begin: " << x.begin() << std::endl;
    std::cout << "End: " << x.end() << END << std::endl;

    (void)nb;
    // bool exist = std::find(x.begin(), x.end(), nb);
    bool exist = true;
    // std::cout << CYAN "Nb found? " << exist << END << std::endl;
    if (exist) {
        std::cout << "Element found\n";
    } else {
        throw NotFoundException();
    }
    return ;
}

// in a c++11 manner

// template<typename T, class C>
// void    easyfind( T const & t, C&& nb ) {
//     int last = sizeof(t) / sizeof(*t);
//     std::cout << CYAN "t + last = " << *(t + last) << END << std::endl;

//     bool exist = std::find(std::begin(nb), std::end(nb), t);
//     std::cout << CYAN "Nb found? " << *std::find(t, t + last, nb) << END << std::endl;
//     if (exist) {
//         std::cout << "Element found\n";
//     } else {
//         throw NotFoundException();
//     }
//     return ;
// }

#endif