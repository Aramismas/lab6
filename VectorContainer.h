#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
#include <iostream>
#include <vector>
#include "sort.hpp"
#include "base.hpp"
#include "container.hpp"

using namespace std;
class Sort; 
class Base; 
class VectorContainer : public Container {
        private:
         vector<Base*> v;

        protected:
        Sort* sort_function;


        public:
        VectorContainer() : sort_function(nullptr), v(nullptr), Container() { };
	VectorContainer(Sort* function): Container(); 


#endif


