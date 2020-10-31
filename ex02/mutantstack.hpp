/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: angeli <angeli@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 19:15:39 by angeli        #+#    #+#                 */
/*   Updated: 2020/10/28 19:27:23 by angeli        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
#include <stack>
# include <iterator>
template<typename T>
class       MutantStack : public std::stack<T>
{
    private:
       
    public:   
        MutantStack() : std::stack<T>() {}
        MutantStack(std::stack<T> const & copy) : std::stack<T>(copy)  {}
        MutantStack(MutantStack const & copy) : std::stack<T>(copy) {}
        using std::stack<T, std::deque<T> >::operator=;
        typedef typename std::stack<T, std::deque<T> >::container_type::iterator iterator;
        iterator			begin(void) {return (this->c.begin());}
        iterator			end(void) {return (this->c.end());}
};

#endif