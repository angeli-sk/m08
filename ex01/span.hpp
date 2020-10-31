/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akramp <akramp@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 11:21:04 by akramp        #+#    #+#                 */
/*   Updated: 2020/10/26 22:26:34 by akramp        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

class	Span
{
	private:
		unsigned int	const _N;
		std::vector<int> _nums;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & copy);
		Span & operator = (Span const & copy);
		~Span();
		void addNumber(int N);
		template <class InputIterator>
		void addNumber(InputIterator first, InputIterator last)
		{
			if (this->_nums.size() >= this->_N)
				throw std::exception();
			while(first < last)
			{
				this->_nums.push_back(*first);
				first++;
			}
		}
		unsigned int shortestSpan();
		unsigned int longestSpan() const;
};
