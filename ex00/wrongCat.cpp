/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:43:55 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:53:28 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Wrong cat was constructed" << std::endl;
	this->type = "wrong cat";
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal(other) {
	std::cout << "Wrong cat was constructed from a copy" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat& other) {
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat was destroyed" << std::endl;
}

std::string WrongCat::getType( void ) const {
	return (this->type);
}

void WrongCat::makeSound() const {
	std::cout << "Fake meow meow" << std::endl;
}
