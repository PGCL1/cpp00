/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:57:32 by glacroix          #+#    #+#             */
/*   Updated: 2024/05/29 17:14:14 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	std::cout << std::boolalpha;
	Point a(1, 1);
	Point b(2, 3);
	Point c(2, 5);

	std::cout << bsp(a, b, c, p) << std::endl;
	return 0;
}
