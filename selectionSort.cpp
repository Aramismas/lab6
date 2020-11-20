#include "selectionSort.hpp"

void SelectionSort::sort(Container* container) { 
    int i, j, first, temp;
    int numLength = container->size();
    for (i = 0; i < numLength - 1; i++) {
        first = i;
        for (j = i+1; j < numLength; j++) {
            if (container->at(j)->evaluate() < container->at(first)->evaluate()) { 
                first = j;
            }
        }
        container->swap(first, i);
    }
    return;
}
