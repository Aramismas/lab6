#include <iostream>
#include "VectorContainer.h"
#include "Container.hpp"
using namespace std;
class Sort; 
class Base; 
VectorContainer::VectorContainer(Sort* function)
{
	sort_function = &function; 
	v = nullptr;
} 

void VectorContainer::set_sort_function(Sort* function)
{	
	sort_function = &function; 
                                                                                                                                                      }

virtual void VectorContainer::add_element(Base* element)
{
        v.push_back(element);
}

virtual void print()
{
	for(int i = 0; i < v.size(); i++)
  	   {
		cout << v[i]->stringify() << endl; 
	   } 
}

virtual void VectorContainer::sort()
{	if(sort_function != nullptr)
 	{
		sort_function->sort(&v);
		return;  
	}
	else 
	{
	return; 
	}
	
}
virtual void VectorContainer::swap(int i, int j) 
{
	std::swap(v[i], v[j]);

}
virtual Base*  VectorContainer:: at(int i)
{              
	return *v[i]; 
}

virtual int size()
{ 

 return v.size(); 

}
