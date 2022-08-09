/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:27 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 22:07:23 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <bits/stdc++.h> // for c++98 ver ?

int main()
{
    try
    {
        std::vector<int> vec;

        for (int i = 0; i < 10; i++)
            vec.push_back(i);
        
        for (int i = 0; i < 10; i++)
            std::cout << "vec[" << i << "] = [" << vec[i] << "]" << std::endl;
        
        ::easyfind(vec, 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::vector<char> vec;

        for (int i = 0; i < 10; i++)
            vec.push_back(i + 'A');
        
        for (int i = 0; i < 10; i++)
            std::cout << "vec[" << i << "] = [" << vec[i] << "]" << std::endl;
        
        ::easyfind(vec, 'C');
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}