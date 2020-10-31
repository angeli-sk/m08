/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:20:59 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/26 22:15:08 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ctime>
#include "span.hpp"
int	main()
{
	srand(time(NULL));
	std::vector<int> veccy;
	veccy.push_back(66);
	veccy.push_back(7777);
	veccy.push_back(88888);
	Span sp = Span(8);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(12);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	for (int i = 0; i < 10000; i++)
		veccy.push_back(rand());
	sp.addNumber(veccy.begin(), veccy.end());
	std::cout <<sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

