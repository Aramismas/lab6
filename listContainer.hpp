#ifndef LISTCONTAINER_HPP
#define LISTCONTAINER_HPP

#include "container.hpp"
#include "base.hpp"
#include <list>
#include <iterator>

using namespace std;

class ListContainer : Container { 
    private: 
	List <Base*> listcon; 
}

#endif // LISTCONTAINER_HPP
