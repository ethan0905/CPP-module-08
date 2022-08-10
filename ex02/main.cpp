/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:41:27 by esafar            #+#    #+#             */
/*   Updated: 2022/08/10 03:47:22 by esafar           ###   ########.fr       */
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

    std::cout << CYAN "=== Pushing 3, 5, 737 and 0 ===" END << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::cout << WHITE "mstack.top ->" << mstack.top() << std::endl;
    std::cout << "list.back ->" <<list.back() << END << std::endl;

    std::cout << CYAN "=== Displaying size() ===" END << std::endl;

    std::cout << MAGENTA "mstack.size ->" << mstack.size() << std::endl;
    std::cout << "list.size ->" << list.size() << END << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::list<int>::iterator jt = list.begin();
    std::list<int>::iterator jte = list.end();

    std::cout << CYAN "=== Iterator test increm/decrem ===" END << std::endl;

    ++it;
    std::cout << GREY "++*it = " << *it;
    --it;
    std::cout << " | --*it = " << *it << std::endl;

    ++jt;
    std::cout << "++*jt = " << *jt;
    --jt;
    std::cout << " | --*jt = " << *jt << END << std::endl;

    std::cout << CYAN "=== Printing full stack from .begin() to .end() ===" END << std::endl;
    std::cout << GREEN "mstack: ";
    for ( ; it != ite; it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "list: ";
    for ( ; jt != jte; jt++)
        std::cout << *jt << " ";
    std::cout << END << std::endl;

    std::cout << CYAN "=== Displaying last elem and size() ===" END << std::endl;

    std::stack<int> s(mstack);
    
    std::cout << WHITE "s(mstack).top ->" << s.top() << std::endl;
    std::cout << WHITE "s(mstack).size ->" << s.size() << std::endl;

    
    return (0);
}