#include "BubbleSort.h"

void BubbleSort::sort(Container* container)
{ 	bool swapp = true; 
	Base* temp; 
	Base* temp2;
	 
	while(swapp)
	{
		swapp = false; 
	   for(int i = 0; i < container->size()-1; i++)
		{ 
			 temp = container->at(i); 

			 temp2 = container->at(i + 1); 
			
		 	 if(temp->evaluate() > temp2->evaluate() ) 
			{
				
			container->swap(i , i + 1);
			swapp = true; 
		
			}		
			
				
		}
 	
 	
	} 
}

