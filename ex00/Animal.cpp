/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:48:24 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/02 10:57:43 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "New Animal object created." << std::endl;
	this->type = "animal";
}

Animal::Animal(const Animal& other){
	this->type = other.getType();
	std::cout << "Parametrize constructor called for Animal." << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal object destroyed." << std::endl;
}

std::string Animal::getType()const {
	return this->type;
}

void Animal::makeSound()const {
	std::cout << "... Generic animal sound ..." << std::endl;
}