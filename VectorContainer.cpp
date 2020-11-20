#include "sort.hpp"
#include "VectorContainer.h"
VectorContainer::VectorContainer()
{
 	this->sort_function = nullptr; 
		
}
void VectorContainer::set_sort_function(Sort* function)
{	
	this->sort_function = function; 
                                                                                                                                                      }

void VectorContainer::add_element(Base* element)
{
        v.push_back(element);
}

void VectorContainer::print()
{
	for(int i = 0; i < v.size(); i++)
  	   {
		cout << v[i]->stringify() << endl; 
	   } 
}
void VectorContainer::sort()
{	
	if(sort_function != nullptr)
 	{
			sort_function->sort(this);
		return;  
	}
	else 
	{
	return; 
	}
	
}
 void VectorContainer::swap(int i, int j) 
{
	std::swap(v[i], v[j]);

}
 Base* VectorContainer::at(int i)
{              
	return v[i]; 
}

 int VectorContainer::size()
{ 

 return v.size(); 

}
