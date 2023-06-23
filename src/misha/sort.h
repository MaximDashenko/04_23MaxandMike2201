

#ifndef INC_05_23MAXANDMIKE2201_SORT1_H
#define INC_05_23MAXANDMIKE2201_SORT1_H

#include <iostream>

namespace misha {

    void bubbleSort(int array1[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array1[j] > array1[j + 1]) {
                    int temp = array1[j];
                    array1[j] = array1[j + 1];
                    array1[j + 1] = temp;
                }
            }
        }
    }

    void insertionSort(int array1[], int size) {
        for (int i = 1; i < size; i++) {
            int key = array1[i];
            int j = i - 1;
            while (j >= 0 && array1[j] > key) {
                array1[j + 1] = array1[j];
                j--;
            }
            array1[j + 1] = key;
        }
    }
}


#endif //INC_05_23MAXANDMIKE2201_SORT1_H
