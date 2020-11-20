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
#include "sort.hpp"
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
    VectorContainer* test_container = new VectorContainer(); 
    test_container->add_element(add);
    test_container->print();  
    std::cout << test_container->size(); 
    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0; 

}   
