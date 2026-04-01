/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:43:53 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:46:33 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal was constructed" << std::endl;
	this->type = "animal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal was destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other) {
	this->type = other.type;
	std::cout << "Wrong Animal was constructed from a copy" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& other) {
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "... generic wrong animal sound ..." << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->type);
}