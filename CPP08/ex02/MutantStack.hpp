#pragma once
#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T> >
	class MutantStack : public std::stack<T, Container>{
		public:
			MutantStack(const Container& cont = Container())
				: std::stack<T, Container>(cont){};
			
			typedef typename Container::iterator iterator;
			typedef typename Container::const_iterator const_iterator;
			typedef typename Container::const_reverse_iterator const_reverse_iterator;
			typedef typename Container::reverse_iterator reverse_iterator;
			
			iterator begin(){return this->c.begin();}
			const_iterator begin()const{return this->c.begin();}
			iterator end(){return this->c.end();}
			const_iterator end()const{return this->c.end();}
			reverse_iterator rend(){return this->c.rend();}
			const_reverse_iterator rend()const{return this->c.rend();}
			reverse_iterator rbegin(){return this->c.rbegin();}
			const_reverse_iterator rbegin()const{return this->c.rbegin();}
};
