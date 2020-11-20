#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
#include "container.hpp"
#include <iostream>
#include <vector>
#include "base.hpp"

using namespace std;
class Sort; 
class Base; 
class VectorContainer : Container {
        private:
         vector<Base*> v;
	protected:
	Sort* sort_function; 
	public:
	VectorContainer(); 
        void set_sort_function(Sort* function); 
	void add_element(Base* element); 
	void print(); 
 	void sort(); 
	void swap(int i, int j); 
	Base* at(int i); 
	int size(); 
};


#endif


