#include <iostream>

#include "max/sort.h"

template<typename T, int size>
void print_array(T (&array)[size]) {
    std::cout << "[" << array[0];
    for (int i = 1; i < size; ++i) {
        std::cout << ", " << array[i];
    }
    std::cout << "]" << std::endl;
}

int main() {
    int array[] = {10, 3, 4, 3, 4, 9, 1, 0, -10, -5};
    max::sort(array);
    print_array(array);
    return 0;
}
