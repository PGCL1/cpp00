/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:12 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 16:46:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form {
    private:
        const std::string   m_name;
        bool                m_isSigned;
        const int           m_gradeSign;
        const int           m_gradeExec;

    public:
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception {
            const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            const char *what(void) const throw();
        };
        void beSigned(Bureaucrat& b);

        Form();
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        ~Form();
};

std::ostream& operator <<(std::ostream& output, const Form& _f);

#endif
