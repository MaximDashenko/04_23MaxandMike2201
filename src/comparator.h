//
// Created by Maxim Dashenko on 23.06.2023.
//

#ifndef INC_04_23MAXANDMIKE2201_COMPARATOR_H
#define INC_04_23MAXANDMIKE2201_COMPARATOR_H

#include <functional>

template<typename T>
using Comparator = const std::function<int(const T &, const T &)> &;

const auto default_comparator = [](const auto &lhs, const auto &rhs) {
    return lhs < rhs ? -1 : lhs > rhs ? 1 : 0;
};

#endif //INC_04_23MAXANDMIKE2201_COMPARATOR_H
