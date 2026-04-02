/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:45:10 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/02 11:59:08 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Created a brain for an animal" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Brain parametrize constructor called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(int i, std::string newIdea){
	if (i >= 0 && i < 100)
		this->ideas[i] = newIdea;
}