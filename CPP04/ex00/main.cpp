/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auspensk <auspensk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:17:12 by auspensk          #+#    #+#             */
/*   Updated: 2025/02/05 13:38:07 by auspensk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void report(const Animal &animal){
	std::cout << "Report function called on this object" << std::endl;
	animal.getType();
	animal.makeSound();
}

void wreport(const WrongAnimal wanimal){
	std::cout << "Wreport function called on this object" << std::endl;
	wanimal.getType();
	wanimal.makeSound();
}

int	main(void){

	std::cout << "Animal* = new Animal()" << std::endl;
	const Animal* meta = new Animal();
	meta->getType();
	meta->makeSound();
	report(*meta);

	std::cout << "\nAnimal* = new Cat()" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	report(*i);

	std::cout << "\nAnimal* = new Dog()" << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	report(*j);

	std::cout << "\nCat cat; Animal animal = cat - this would cause slicing, the animal object will behave like Animal, not Cat" << std::endl;
	Cat cat;
	Animal animal = cat;
	animal.getType();
	animal.makeSound();
	report(animal);
	report(cat);

	std::cout << "\nWrongAnimal* = new WrongAnimal()" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	wmeta->getType();
	wmeta->makeSound();
	wreport(*wmeta);

	std::cout << "\nWrongAnimal* = new WrongCat()" << std::endl;
	const WrongAnimal* wi = new WrongCat();
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wreport(*wi);

	std::cout << "\nWrongCat wcat; WrongAnimal wanimal = w" << std::endl;
	WrongCat wcat;
	WrongAnimal wanimal = wcat;
	wanimal.getType();
	wanimal.makeSound();
	wreport(wanimal);
	wreport(wcat);
	delete(wmeta);
	delete(meta);
	delete(i);
	delete(j);
	delete(wi);
}
