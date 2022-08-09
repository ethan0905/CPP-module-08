/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:27 by esafar            #+#    #+#             */
/*   Updated: 2022/08/09 23:22:20 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
// #include <bits/stdc++.h> // for c++98 ver ?

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(3);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // try
    // {
    //     Span span(100);

    //     for (int i = 10; i > 0; i--)
    //         span.addNumber(i);

    //     span.addNumber(42);

    //     std::cout << "longest span: " << span.longestSpan() << std::endl;
        
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    return (0);
}