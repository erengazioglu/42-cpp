/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:12:13 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 18:50:55 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

# include <string>
# include <iostream>
# include <exception>
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name);
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat&);

		const std::string& get_name() const;
		int get_grade() const;
		void grade_up();
		void grade_down();

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};

	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif