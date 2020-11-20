#ifndef LISTCONTAINER_HPP
#define LISTCONTAINER_HPP

#include "container.hpp"
#include "base.hpp"
#include <list>
#include <iterator>
#include <iostream>

using namespace std;

class ListContainer : public Container { 
    protected:
	Sort* sort_function; 
	list <Base*> listcon;
    public:
	ListContainer() : Container() {};
        ListContainer(Sort* function) : Container(function) {};
	void set_sort_function(Sort* sort_function) {this->sort_function = sort_function;};
	void add_element(Base* element);
	void print();
	void sort();
	void swap(int i, int j);
	Base* at(int i);
	int size();  
};

#endif // LISTCONTAINER_HPP
