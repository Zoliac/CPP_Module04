/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:20:48 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:03:42 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream> 

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal& other);
		WrongAnimal & operator=(const WrongAnimal& other);
		void makeSound() const;
		std::string getType( void ) const;
};