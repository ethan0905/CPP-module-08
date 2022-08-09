/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:27 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 20:31:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <bits/stdc++.h> // for c++98 ver ?

int main()
{
    try
    {
        // // Initializer list
        // std::vector<int> tab = {1, 2, 3, 4, 5};
        // Uniform initialization
        std::vector<int> tab;

        tab.push_back(0);
        tab.push_back(1);
        tab.push_back(2);

        ::easyfind(tab, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}