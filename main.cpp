#include <iostream>
#include <math.h>
#include "base.hpp"
#include "op.hpp"
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "pow.h"
#include "container.hpp"
#include "BubbleSort.h"
#include "VectorContainer.h" 
#include "listContainer.hpp"
#include "selectionSort.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab 
  
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);
    VectorContainer* test_container1 = new VectorContainer(); 
    test_container1->add_element(add);
    test_container1->add_element(seven);
    test_container1->add_element(two);
    test_container1->print();
    cout << test_container1->size(); 
    test_container1->set_sort_function(new BubbleSort());
    test_container1->sort();
    test_container1->print();
    cout << test_container1->size();
    
    ListContainer* test_container = new ListContainer();
    test_container->add_element(three);
    test_container->add_element(seven);
    test_container->add_element(four);
    test_container->add_element(two);
    cout << test_container->size() << endl;
    test_container->print();
    test_container->swap(0, 2); 
    cout << test_container->size() << endl;
    test_container->print();
    test_container->set_sort_function(new SelectionSort());
    test_container->sort();
    test_container->print();
    return 0; 

}   
