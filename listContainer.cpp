#include "listContainer.hpp" 

void ListContainer::add_element(Base* element) {
    listcon.push_back(element);
}

void ListContainer::print() {
    list<Base*>::iterator it;
    Base* temp;
    for (it = listcon.begin(); it != listcon.end(); it++) {
        temp = *it;
 	cout << temp->stringify() << " ";
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
    list<Base*>::iterator it2;
    for (it = listcon.begin(); it != listcon.end(); it++) {
        if (count == min) { 
	    it2 = it;
            temp = *it;
        }
        if (count == max) { 
            temp2 = *it;
            *it = temp;
            *it2 = temp2;
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
    return nullptr;
}  

int ListContainer::size() { 
   return listcon.size();
} 
