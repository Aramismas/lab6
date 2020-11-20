#include "listContainer.hpp" 

void ListContainer::set_sort_function(Sort* sort_function) { 
    this->sort_function = sort_function;
}

void ListContainer::add_element(Base* element) {
    listcon.push_back(element);
}

void ListContainer::print() {
    list<Base*>::iterator it;
    for (it = listcon.begin(); it != listcon.end(); it++) {
 	cout << it->stringify() << " ";
    }
    cout << endl;
}

void ListContainer::sort() {
    this->sort_function->sort(this);
} 

void ListContainer::swap(int i, int j) { 
    Base* temp;
    Base* temp2;
    int count = 0;
    int min = 0;
    int max = 0;
    if (i < j) {
       min = i;
       max = j;
    } else if (i > j) {
       min = j;
       max = i;
    } else { 
       return;
    }
    list<Base*>::iterator it;
    for (it = listcon.begin(); it != listcon.end(); it++) {
        if (count == min) { 
	    temp = *it;
        }
        if (count == max) { 
            temp2 = *it;
            **it = *temp;
            *temp = *temp2;
        } 
        count++;          
    }     
}

Base* ListContainer::at(int i) { 
    list<Base*>::iterator it;
    int count = 0;
    for (it = listcon.begin(); it != listcon.end(); it++) {
        if (count == i) {
           return *it;
        }
        count++;
    }
    return null;
}  

int ListContainer::size() { 
   return listcon.size();
} 
