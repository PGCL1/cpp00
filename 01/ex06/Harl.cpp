/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:46:52 by glacroix          #+#    #+#             */
/*   Updated: 2024/03/16 13:01:06 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl; 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger " << std::endl; 
    std::cout << "I really do!" << std::endl;
    std::cout << std::endl;
}
void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl; 
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl; 
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl; 
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl; 
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}
void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl; 
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}


void Harl::complain(std::string level)
{
    int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (; i < 4; i++)
    {
        if (level == levels[i])
            break;
    }
    switch(i)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

Harl::~Harl() {}
