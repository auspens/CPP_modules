
#include "Span.hpp"
#include <vector>
#include <ctime>
#include <iostream>
#include <algorithm>

int main(){

		std::cout << "\nTEST1" << std::endl;
		Span span(3);
		try{
			for (int i = 0; i < 4; ++i)
				span.addNumber(i);
		}
		catch (std::exception &e){
			std::cout <<e.what();
		}

		std::cout << "\nTEST2" << std::endl;
		std::vector <int> v;
		v.reserve(10);
		std::srand(std::time(NULL)); 
		for (int i = 0; i < 10; ++i){
			v.push_back(std::rand() % 100);
		}
		std::random_shuffle(v.begin(), v.end());
		Span span1(10);
		std::cout<< "vector contents: ";
		for(int i = 0; i < 10; ++i){
			std::cout << v[i] <<", ";
			span1.addNumber(v[i]);
		}
		std::cout<<"\nshortest span: " << span1.shortestSpan()
			<< "\nlongest span: " << span1.longestSpan() << std::endl;

		std::cout << "\nTEST3" << std::endl;
		Span span2(100000);
		int range_to_add = 100000;
		std::vector<int> collection;
		collection.reserve(range_to_add);
		for (int i = 0; i < range_to_add; ++i){
			collection.push_back(std::rand());
		}
		try {
			span2.addRange(collection.begin(), collection.end());
		}
		catch (std::exception &e){
			std::cout <<e.what();
		}
		std::cout <<"shortest span: " << span2.shortestSpan() 
			<<"\nlongest span: " << span2.longestSpan() << std::endl;

		
		std::cout << "\nTEST42" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
}