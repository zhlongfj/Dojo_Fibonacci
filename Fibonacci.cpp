//
// Created by Hualong Zhang on 2021/1/22.
//

#include "Fibonacci.h"

int64_t Fibonacci::calculate(int index) {
    if (index == 0) {
        return 0;
    }
    if (index == 1 || index == 2) {
        return 1;
    }

    int first = 1;
    int second = 2;
    int temp = 0;
    for (int i = 3; i < index; ++i) {
        temp = first;
        first = second;
        second = temp + first;
    }
    return second;
}
