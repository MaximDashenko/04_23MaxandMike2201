//
// Created by Maxim Dashenko on 23.06.2023.
//

#ifndef INC_04_23MAXANDMIKE2201_SORT_H
#define INC_04_23MAXANDMIKE2201_SORT_H

#include <algorithm>
#include "../comparator.h"

namespace max {

    template<typename T, int i>
    void sort(T (&array)[i], Comparator<T> comparator) {

    }

    template<typename T, int i>
    void sort(T (&array)[i]) {
        sort<T, i>(array, default_comparator);
    }

}

#endif //INC_04_23MAXANDMIKE2201_SORT_H
