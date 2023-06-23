//
// Created by Maxim Dashenko on 23.06.2023.
//

#ifndef INC_04_23MAXANDMIKE2201_SORT_H
#define INC_04_23MAXANDMIKE2201_SORT_H

#include <algorithm>
#include "../comparator.h"

namespace max {

    // default implementation for all types
    // bumble-sort
    template<typename T, int size>
    void sort(T (&array)[size], Comparator<T> comparator) {
        for (int pass = 0; pass < size - 1; ++pass) {
            auto swapped = false;
            for (int j = 0; j < size - pass - 1; ++j) {
                if (comparator(array[j], array[j + 1]) > 0) {
                    std::swap(array[j], array[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
    }

    template<typename T, int size>
    void sort(T (&array)[size]) {
        sort<T, size>(array, default_comparator);
    }

    // specialized template for unsigned int
    // radix-sort
    template<int size>
    void sort(unsigned int (&array)[size]) {
        int max = array[0];
        for (int i = 1; i < size; ++i) {
            if (max < i) {
                max = i;
            }
        }
        for (int div = 1; max / div > 0; div *= 10) {
            int output[size];
            int count[10] = {0};

            for (int i = 0; i < size; i++) {
                count[(array[i] / div) % 10]++;
            }

            for (int i = 1; i < 10; i++) {
                count[i] += count[i - 1];
            }

            for (int i = size - 1; i >= 0; i--) {
                output[count[(array[i] / div) % 10] - 1] = array[i];
                count[(array[i] / div) % 10]--;
            }

            for (int i = 0; i < size; i++) {
                array[i] = output[i];
            }
        }
    }

}

#endif //INC_04_23MAXANDMIKE2201_SORT_H
