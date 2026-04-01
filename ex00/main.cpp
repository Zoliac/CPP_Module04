/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 18:37:14 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 11:58:56 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	//std::cout << "Cree trois instances d'animal, et ensuite cree deux instances, une de dog et une autre de cat" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	//std::cout << "Renvoie le type de dog et de cat, ici, ils sont bien instancies" << std::endl
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	//std::cout << "Doit faire le mauvais son d'animal, donc generic wrong animal sound" << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;
}