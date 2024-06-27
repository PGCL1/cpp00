/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:33:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 20:06:18 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(), m_requiredGradeSign(72), m_requiredGradeExec(45) 
{
    std::cout << GREEN << " PresidentialPardonForm's Default Constructor" << target << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), m_requiredGradeSign(72), m_requiredGradeExec(45) {}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << this->getName() << " PresidentialPardonForm's Destructor!" << RESET << std::endl;
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() == true && this->getGradeExec() < this->getRequiredGradeExec())
    {
        this->action();
        executor.executeForm(*this);
    }
    else if (this->getGradeExec() > this->getRequiredGradeExec())
        throw PresidentialPardonForm::GradeTooLowException();
}

int PresidentialPardonForm::getRequiredGradeExec() const
{
    return this->m_requiredGradeExec;
}

int PresidentialPardonForm::getRequiredGradeSign() const
{
    return this->m_requiredGradeSign;
}

std::string PresidentialPardonForm::getTarget() const 
{
    return this->getTarget();
}
