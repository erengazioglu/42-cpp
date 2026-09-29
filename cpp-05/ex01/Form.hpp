/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:39:49 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 23:02:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(const std::string& name);
		Form(const std::string& name, int sign, int exec);
		Form(const Form&);
		~Form();
		Form& operator=(const Form&);

		void beSigned(const Bureaucrat&);
		const std::string& get_name(void) const;
		int get_sign_clearance(void) const;
		int get_exec_clearance(void) const;
		
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			const char* what() const throw();
		};
		
	private:
		const std::string _name;
		bool _is_signed;
		int _sign_clearance;
		int _exec_clearance;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif