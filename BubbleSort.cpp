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
	while(swapp)
	{
		swapp = false; 
	   for(int i = 0; i < container->size()-1; i++)
		{ 
			Base* temp = container->at(i); 
			Base* temp2 = containter->at(i +1); 
			
		 	 if(temp->evaluate() > temp2->evaluate() ) 
			{

			container->swap(container->at(i) , container->at(i + 1));
			swapp = true
		
			}		
			delete temp; 
			delete temp2; 
				
		}
 	
 	
	} 
}

