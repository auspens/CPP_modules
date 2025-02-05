/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:17:12 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 15:29:16 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	test_cats(){
	std::cout << "1. Create an instance of cat, check if brain is created and works" << std::endl;
	Cat cat;
	std::cout<< "Cat's first idea: " << cat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Set ideas at index 0 and 4" << std::endl;
	cat.getBrain()->setIdea("Let's have lunch!", 0);
	cat.getBrain()->setIdea("What if mice had wings?", 4);
	std::cout<< "Cat's first idea: " << cat.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Cat's fifth idea: " << cat.getBrain()->getIdea(4) << std::endl;

	std::cout << "\n2. Create another instance of cat using copy constructor, check for shallow copying" << std::endl;
	Cat cat2(cat);
	std::cout<< "Cat2's first idea: " << cat2.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Cat2's fifth idea: " << cat2.getBrain()->getIdea(4) << std::endl;

	std::cout << "\n3. Use assignment operator, check for shallow copying" << std::endl;
	Cat cat3;
	cat3 = cat2;
	std::cout<< "Cat3's first idea: " << cat3.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Cat3's fifth idea: " << cat3.getBrain()->getIdea(4) << std::endl;
}

void test_dogs(){
	std::cout << "\n1. Create an instance of dog, check if brain is created and works" << std::endl;
	Dog dog;
	std::cout<< "Dog's first idea: " << dog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Set ideas at index 0 and 4" << std::endl;
	dog.getBrain()->setIdea("My human is best!", 0);
	dog.getBrain()->setIdea("Where's my ball?", 4);
	std::cout<< "Dog's first idea: " << dog.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Dog's fifth idea: " << dog.getBrain()->getIdea(4) << std::endl;

	std::cout << "\n2. Create another instance of odg using copy constructor, check for shallow copying" << std::endl;
	Dog dog2(dog);
	std::cout<< "Dog2's first idea: " << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Dog2's fifth idea: " << dog2.getBrain()->getIdea(4) << std::endl;

	std::cout << "\n3. Use assignment operator, check for shallow copying" << std::endl;
	Dog dog3;
	dog3 = dog2;
	std::cout<< "Dog3's first idea: " << dog3.getBrain()->getIdea(0) << std::endl;
	std::cout<< "Dog3's fifth idea: " << dog3.getBrain()->getIdea(4) << std::endl;
}

int	main(void){

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	test_cats();
	test_dogs();
	std::cout << "\nCreate an array of 10 animals, first 5 are Cat, other 5 are Dog. Check random index in first and second half. Delete all objects" << std::endl;
	Animal *animals[10];
	for (int i = 0; i < 5; ++i)
		animals[i] = new Cat();
	for (int i = 5; i < 10; ++i)
		animals[i] = new Dog();
	animals[1]->makeSound();
	animals[8]->makeSound();
	for (int i = 0; i < 10; ++i)
		delete(animals[i]);
}
