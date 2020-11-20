 #include <iostream>
#include <math.h>
#include "base.hpp"
#include "op.hpp"
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "pow.h"

#include "VectorContainer.h" 
#include "BubbleSort.h" 
#include "selectionSort.hpp" 
TEST( VecTest, CheckSwap) {

   Op* seven = new Op(7); 
   VectorContainer* test_container = new VectorContainer(); 
   test_container->add_element(seven); 
   ASSERT_EQ(test_container->size(), 1);
        EXPECT_EQ(test_container->at(0)->evaluate(), 7); 
        Op* nine = new Op(9);
    test_container->add_element(nine);
    EXPECT_EQ(test_container->at(1)->evaluate(), 9);
    ASSERT_EQ(test_container->size(), 2);
    Op* three = new Op(3);
    test_container->add_element(three);
    test_container->swap(0, 2);
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 3);
    EXPECT_EQ(test_container->at(1)->evaluate(), 9);
    EXPECT_EQ(test_container->at(2)->evaluate(), 7);

}
TEST(VectorContainerTestSet, ComboTest) {
    Op* seven = new Op(7);
    Op* nine = new Op(9);
    Op* three = new Op(3);
    Mult* tree = new Mult(seven, nine);
    VectorContainer* test_container = new VectorContainer();
    test_container->add_element(seven);
    test_container->add_element(tree);
    test_container->add_element(three);
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
    EXPECT_EQ(test_container->at(1)->evaluate(), 63);
    EXPECT_EQ(test_container->at(1)->stringify(), "7.000000 * 9.000000");
    EXPECT_EQ(test_container->at(2)->evaluate(), 3);
    test_container->swap(1, 2);
    ASSERT_EQ(test_container->size(), 3);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
    EXPECT_EQ(test_container->at(1)->evaluate(), 3);
    EXPECT_EQ(test_container->at(2)->stringify(), "7.000000 * 9.000000");
    EXPECT_EQ(test_container->at(2)->evaluate(), 63);
    Add* tree2 = new Add(three, nine);
    test_container->add_element(tree2); 
    ASSERT_EQ(test_container->size(), 4);
    EXPECT_EQ(test_container->at(3)->stringify(), "3.000000 + 9.000000");
    EXPECT_EQ(test_container->at(3)->evaluate(), 12);
}
TEST(SortTestSet, BubbleSortTest) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}


TEST(SelectionSortTestSet, SelectionSort) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

    
