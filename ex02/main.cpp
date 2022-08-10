/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:27 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 03:29:17 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    std::list<int> list;
    
    std::cout << CYAN "=== Pushing 5 then 17 ===" END << std::endl;
    
    mstack.push(5);
    mstack.push(17);
    list.push_back(5);
    list.push_back(17);

    std::cout << WHITE "mstack.top ->" << mstack.top() << std::endl;
    std::cout << "list.back ->" <<list.back() << END << std::endl;

    std::cout << CYAN "=== Poping last element ===" END << std::endl;
    
    mstack.pop();
    list.pop_back();

    std::cout << YELLOW "mstack.top ->" << mstack.top() << std::endl;
    std::cout << "list.back ->" <<list.back() << END << std::endl;
    
    std::cout << CYAN "=== Displaying size() ===" END << std::endl;

    std::cout << MAGENTA "mstack.size ->" << mstack.size() << std::endl;
    std::cout << "list.size ->" << list.size() << END << std::endl;

    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // //[...]
    // mstack.push(0);
    
    // std::cout << mstack.top() << std::endl;

    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    
    // ++it;
    // std::cout << "++*it = " << *it << std::endl;
    // --it;
    // std::cout << "--*it = " <<*it << std::endl;

    // while (it != ite)
    // {
    //     std::cout << "*it = " << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);
    
    return (0);
}