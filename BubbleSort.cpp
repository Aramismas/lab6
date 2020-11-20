#include "BubbleSort.h"
#include "container.hpp"
#include "VectorContainer.hpp"
#include <vector> 
class Base
BubbleSort::BubbleSort()
{

}

BubbleSort::Sort(Container* container)
{ 	bool swapp = true; 
	Base* temp; 
	Base* temp2; 
	while(swapp)
	{
		swapp = false; 
	   for(int i = 0; i < container->size()-1; i++)
		{ 
			 temp = container->at(i); 
			 temp2 = containter->at(i + 1); 
			
		 	 if(temp->evaluate() > temp2->evaluate() ) 
			{

			container->swap(container->at(i) , container->at(i + 1));
			swapp = true
		
			}		
			
				
		}
 	
 	
	} 
}

