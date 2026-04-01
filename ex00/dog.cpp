/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:43:58 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:59:29 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "New Dog object created." << std::endl;
	this->type = "dog";
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Parametrize constructor called for Dog." << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog object destroyed." << std::endl;
}

std::string Dog::getType()const {
	return this->type;
}

void Dog::makeSound()const {
	std::cout << "Woof woof !" << std::endl;
}