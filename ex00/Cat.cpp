/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:44:00 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:59:25 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "New Cat object created." << std::endl;
	this->type = "cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Parametrize constructor called for Cat." << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat object destroyed." << std::endl;
}

std::string Cat::getType()const {
	return this->type;
}

void Cat::makeSound()const {
	std::cout << "Meow meow !" << std::endl;
}