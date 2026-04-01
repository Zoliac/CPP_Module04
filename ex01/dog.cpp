/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:43:58 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 13:21:57 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "New Dog object created." << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Copy constructor called for Dog." << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other){
	if (this == &other)
		return *this;
	this->type = other.type;
	*this->_brain = *other._brain;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog object destroyed." << std::endl;
	delete this->_brain;
}

std::string Dog::getType()const {
	return this->type;
}

void Dog::makeSound()const {
	std::cout << "Woof woof !" << std::endl;
}