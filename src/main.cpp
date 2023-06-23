#include <iostream>

#include "max/sort.h"
#include "misha/sort.h"

template<typename T, int size>
void print_array(T (&array)[size]) {
    std::cout << "[" << array[0];
    for (int i = 1; i < size; ++i) {
        std::cout << ", " << array[i];
    }
    std::cout << "]" << std::endl;
}

int main() {
    // max
    unsigned int array[] = {10, 3, 4, 3, 4, 9, 1, 0};
    max::sort(array);
    print_array(array);

    double array2[] = {10.0, 3.0, 4.0, 3.0, 4.0, 9.0, 1.0, 0.0};
    max::sort(array2);
    print_array(array2);

    // misha
    int array3[] = {10, 3, 4, 3, 4, 9, 1, 0};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    misha::bubbleSort(array3, size3);
    print_array(array2);

    int array4[] = {10, 3, 4, 3, 4, 9, 1, 0};
    int size4 = sizeof(array4) / sizeof(array4[0]);
    misha::insertionSort(array4, size4);
    print_array(array4);

    return 0;
}
