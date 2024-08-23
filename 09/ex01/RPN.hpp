/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:49:45 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/23 18:36:44 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

//i have to do this because it's the only way to access c (cause it's protected)
class RPN : public std::stack<int>
{
    public:
        typedef std::deque<int>::reverse_iterator iterator;
        iterator begin(void)
        {
            return this->c.rbegin();
        }
        iterator end(void)
        {
            return this->c.rend();
        }
        RPN(std::string& input);
        bool wrongInputStack();
        void calculatePolishNotation();
        ~RPN();
};

#endif
