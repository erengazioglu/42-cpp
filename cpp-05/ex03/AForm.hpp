/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:39:49 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 23:02:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(const std::string& name);
		AForm(const std::string& name, int sign, int exec);
		AForm(const AForm&);
		virtual ~AForm();
		AForm& operator=(const AForm&);
		virtual AForm* clone() const = 0;

		void beSigned(const Bureaucrat&);
		const std::string& get_name(void) const;
		int get_sign_clearance(void) const;
		int get_exec_clearance(void) const;
		void check_clearance(const Bureaucrat& executor) const;
		virtual void set_target(const std::string&) = 0;
		virtual void execute(const Bureaucrat& executor) const = 0;
		
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			const char* what() const throw();
		};
		class InvalidFileException : public std::exception {
			const char* what() const throw();
		};
		
	private:
		const std::string _name;
		bool _is_signed;
		int _sign_clearance;
		int _exec_clearance;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif