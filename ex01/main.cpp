/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 18:37:14 by lpatin            #+#    #+#             */
/*   Updated: 2026/04/01 15:54:02 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl;

	std::cout << "Test des sons d'animaux" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Son du dog : ";
	dog->makeSound();
	std::cout << "Son du cat : ";
	cat->makeSound();
	std::cout << "Son du wrong cat : ";
	wrongcat->makeSound();
	
	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl;

	delete dog;
	delete cat;
	delete wrongcat;

	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl;

	Dog medor;
	Cat fifi;
	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl << "Creating copies :" << std::endl << std::endl;

	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;
	std::cout << medor_copy_ref.getType() << std::endl;
	std::cout << fifi_copy_ref.getType() << std::endl;

	std::cout << std::endl;
	std::cout << "Now filling arrays, to check with valgrind if there's any leaks." << std::endl;
	std::cout << "_______________________________________" << std::endl;


	const Animal	*animal_array[4];
	
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();

	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl;

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	
	std::cout << "_______________________________________" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
		
	std::cout << std::endl;
}