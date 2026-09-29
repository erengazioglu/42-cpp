/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:39:49 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/29 17:03:08 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>

class Form {
	public:
		Form();
		Form(const Form&);
		~Form();
		Form& operator=(const Form&);

		
	private:
		const std::string _name;
		bool _is_signed;
		int _sign_clearance;
		int _exec_clearance;
};

#endif