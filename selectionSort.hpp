#ifndef SORTLIST_HPP
#define SORTLIST_HPP

#include "sort.hpp"
#include "container.hpp"

class SelectionSort : public Sort {
    public:
        SelectionSort() {};
        void sort(Container* container);
};

#endif // SORTLIST_HPP
