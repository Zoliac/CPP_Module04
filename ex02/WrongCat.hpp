/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:20:18 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:39:24 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	protected:
		std::string	type;

	public:
		WrongCat();
		WrongCat(WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();
		void makeSound() const;
		std::string getType( void ) const;
};